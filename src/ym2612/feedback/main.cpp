// Experimental program to visualize a wave from YM2612.
// The purpose is to explore the correct way to calculate feedback.

#include "fssimplewindow.h"
#include "ym2612.h"



unsigned char sample[]=
{
	0x00,0x30,0x01,//(1)
	0x00,0x34,0x01,//(1)
	0x00,0x38,0x01,//(1)
	0x00,0x3C,0x01,//(1)
	0x00,0x40,0x7F,//(1)
	0x00,0x44,0x7F,//(1)
	0x00,0x48,0x7F,//(1)
	0x00,0x4C,0x7F,//(1)
	0x00,0x50,0x1F,//(1)
	0x00,0x54,0x1F,//(1)
	0x00,0x58,0x1F,//(1)
	0x00,0x5C,0x1F,//(1)
	0x00,0x60,0x00,//(1)
	0x00,0x64,0x00,//(1)
	0x00,0x68,0x00,//(1)
	0x00,0x6C,0x00,//(1)
	0x00,0x70,0x00,//(1)
	0x00,0x74,0x00,//(1)
	0x00,0x78,0x00,//(1)
	0x00,0x7C,0x00,//(1)
	0x00,0x80,0x0F,//(1)
	0x00,0x84,0x0F,//(1)
	0x00,0x88,0x0F,//(1)
	0x00,0x8C,0x0F,//(1)
	0x00,0xB0,0x17,//(1)
	0x00,0xB4,0xC0,//(1)
	0x00,0x31,0x01,//(1)
	0x00,0x35,0x01,//(1)
	0x00,0x39,0x01,//(1)
	0x00,0x3D,0x01,//(1)
	0x00,0x41,0x7F,//(1)
	0x00,0x45,0x7F,//(1)
	0x00,0x49,0x7F,//(1)
	0x00,0x4D,0x7F,//(1)
	0x00,0x51,0x1F,//(1)
	0x00,0x55,0x1F,//(1)
	0x00,0x59,0x1F,//(1)
	0x00,0x5D,0x1F,//(1)
	0x00,0x61,0x00,//(1)
	0x00,0x65,0x00,//(1)
	0x00,0x69,0x00,//(1)
	0x00,0x6D,0x00,//(1)
	0x00,0x71,0x00,//(1)
	0x00,0x75,0x00,//(1)
	0x00,0x79,0x00,//(1)
	0x00,0x7D,0x00,//(1)
	0x00,0x81,0x0F,//(1)
	0x00,0x85,0x0F,//(1)
	0x00,0x89,0x0F,//(1)
	0x00,0x8D,0x0F,//(1)
	0x00,0xB1,0x17,//(1)
	0x00,0xB5,0xC0,//(1)
	0x00,0x32,0x01,//(1)
	0x00,0x36,0x01,//(1)
	0x00,0x3A,0x01,//(1)
	0x00,0x3E,0x01,//(1)
	0x00,0x42,0x7F,//(1)
	0x00,0x46,0x7F,//(1)
	0x00,0x4A,0x7F,//(1)
	0x00,0x4E,0x7F,//(1)
	0x00,0x52,0x1F,//(1)
	0x00,0x56,0x1F,//(1)
	0x00,0x5A,0x1F,//(1)
	0x00,0x5E,0x1F,//(1)
	0x00,0x62,0x00,//(1)
	0x00,0x66,0x00,//(1)
	0x00,0x6A,0x00,//(1)
	0x00,0x6E,0x00,//(1)
	0x00,0x72,0x00,//(1)
	0x00,0x76,0x00,//(1)
	0x00,0x7A,0x00,//(1)
	0x00,0x7E,0x00,//(1)
	0x00,0x82,0x0F,//(1)
	0x00,0x86,0x0F,//(1)
	0x00,0x8A,0x0F,//(1)
	0x00,0x8E,0x0F,//(1)
	0x00,0xB2,0x17,//(1)
	0x00,0xB6,0xC0,//(1)
	0x03,0x30,0x01,//(1)
	0x03,0x34,0x01,//(1)
	0x03,0x38,0x01,//(1)
	0x03,0x3C,0x01,//(1)
	0x03,0x40,0x7F,//(1)
	0x03,0x44,0x7F,//(1)
	0x03,0x48,0x7F,//(1)
	0x03,0x4C,0x7F,//(1)
	0x03,0x50,0x1F,//(1)
	0x03,0x54,0x1F,//(1)
	0x03,0x58,0x1F,//(1)
	0x03,0x5C,0x1F,//(1)
	0x03,0x60,0x00,//(1)
	0x03,0x64,0x00,//(1)
	0x03,0x68,0x00,//(1)
	0x03,0x6C,0x00,//(1)
	0x03,0x70,0x00,//(1)
	0x03,0x74,0x00,//(1)
	0x03,0x78,0x00,//(1)
	0x03,0x7C,0x00,//(1)
	0x03,0x80,0x0F,//(1)
	0x03,0x84,0x0F,//(1)
	0x03,0x88,0x0F,//(1)
	0x03,0x8C,0x0F,//(1)
	0x03,0xB0,0x17,//(1)
	0x03,0xB4,0xC0,//(1)
	0x03,0x31,0x01,//(1)
	0x03,0x35,0x01,//(1)
	0x03,0x39,0x01,//(1)
	0x03,0x3D,0x01,//(1)
	0x03,0x41,0x7F,//(1)
	0x03,0x45,0x7F,//(1)
	0x03,0x49,0x7F,//(1)
	0x03,0x4D,0x7F,//(1)
	0x03,0x51,0x1F,//(1)
	0x03,0x55,0x1F,//(1)
	0x03,0x59,0x1F,//(1)
	0x03,0x5D,0x1F,//(1)
	0x03,0x61,0x00,//(1)
	0x03,0x65,0x00,//(1)
	0x03,0x69,0x00,//(1)
	0x03,0x6D,0x00,//(1)
	0x03,0x71,0x00,//(1)
	0x03,0x75,0x00,//(1)
	0x03,0x79,0x00,//(1)
	0x03,0x7D,0x00,//(1)
	0x03,0x81,0x0F,//(1)
	0x03,0x85,0x0F,//(1)
	0x03,0x89,0x0F,//(1)
	0x03,0x8D,0x0F,//(1)
	0x03,0xB1,0x17,//(1)
	0x03,0xB5,0xC0,//(1)
	0x03,0x32,0x01,//(1)
	0x03,0x36,0x01,//(1)
	0x03,0x3A,0x01,//(1)
	0x03,0x3E,0x01,//(1)
	0x03,0x42,0x7F,//(1)
	0x03,0x46,0x7F,//(1)
	0x03,0x4A,0x7F,//(1)
	0x03,0x4E,0x7F,//(1)
	0x03,0x52,0x1F,//(1)
	0x03,0x56,0x1F,//(1)
	0x03,0x5A,0x1F,//(1)
	0x03,0x5E,0x1F,//(1)
	0x03,0x62,0x00,//(1)
	0x03,0x66,0x00,//(1)
	0x03,0x6A,0x00,//(1)
	0x03,0x6E,0x00,//(1)
	0x03,0x72,0x00,//(1)
	0x03,0x76,0x00,//(1)
	0x03,0x7A,0x00,//(1)
	0x03,0x7E,0x00,//(1)
	0x03,0x82,0x0F,//(1)
	0x03,0x86,0x0F,//(1)
	0x03,0x8A,0x0F,//(1)
	0x03,0x8E,0x0F,//(1)
	0x03,0xB2,0x17,//(1)
	0x03,0xB6,0xC0,//(1)

	0x00,0xA5,0x22,//(1)
	0x00,0xA1,0x6B,//(1)
	0x00,0x41,0x08,//(1)
	0x00,0x45,0x7E,//(1)
	0x00,0x49,0x7E,//(1)
	0x00,0x4D,0x7E,//(1)
	0x00,0x81,0x0F,//(1)
	0x00,0x85,0x0F,//(1)
	0x00,0x89,0x0F,//(1)
	0x00,0x8D,0x0F,//(1)
	0x00,0x28,0x01,//(1)
	0x00,0x81,0x0F,//(1)
	0x00,0x85,0x0F,//(1)
	0x00,0x89,0x0F,//(1)
	0x00,0x8D,0x0F,//(1)
};

void SetUpYM(YM2612 &ym2612,int CONNECT,int FB,int MULTI)
{
	for(int i=0; i<sizeof(sample)/sizeof(sample[0]); i+=3)
	{
		if(0x31==sample[i+1])
		{
			ym2612.WriteRegister(sample[i],sample[i+1],(sample[i+2]&0xF0)|MULTI);
		}
		else
		{
			ym2612.WriteRegister(sample[i],sample[i+1],sample[i+2]);
		}
	}

	ym2612.WriteRegister(0,0xB1,(FB<<3)|CONNECT);  // Ch1 not CH0
}

void StartTone(YM2612 &ym2612)
{
	ym2612.WriteRegister(0,0x28,0xF1); // Start Tone CH1
}

void StopTone(YM2612 &ym2612)
{
	ym2612.WriteRegister(0,0x28,0x01); // Stop Tone CH1
}

std::vector <unsigned char> MakeSample(YM2612 &ym2612,int CONNECT,int FB,int MULTI)
{
	SetUpYM(ym2612,CONNECT,FB,MULTI);
	StartTone(ym2612);
	auto wave=ym2612.MakeWave(1,100); // 100ms
	StopTone(ym2612);
	return wave;
}

int main(void)
{
	// FB=5,6,7 depends on the sampling cycle.
	//     440Hz -> cycle=0.002272727272... second
	//     If YM2612 internal frequency is 600KHz as explained in FM Towns Technical Databook,
	//     (1/600K)/0.02272727272=(1/600K)*440=440/600K=0.000733 seconds.
	//     If it is 690KHz as my obbservation,
	//     440/690K=0.000638 seconds.
	// 1.5K?  No way!  Am I calculating wrong?

	// PrintTable();

	int FB=0;
	int CONNECT=7;
	int MULTI=1;
	double adjust=1.0;
	double dt=0.000638;
	YM2612 ym2612;
	std::vector <unsigned char> wave=MakeSample(ym2612,CONNECT,FB,MULTI);

	FsOpenWindow(0,0,800,600,1);
	for(;;)
	{
		FsPollDevice();
		auto key=FsInkey();
		if(FSKEY_ESC==key)
		{
			break;
		}
		if(FSKEY_Q==key)
		{
			++FB;
			if(7<FB)
			{
				FB=7;
			}
			printf("FB %d\n",FB);
			wave=MakeSample(ym2612,CONNECT,FB,MULTI);
		}
		else if(FSKEY_A==key)
		{
			--FB;
			if(FB<0)
			{
				FB=0;
			}
			printf("FB %d\n",FB);
			wave=MakeSample(ym2612,CONNECT,FB,MULTI);
		}
		else if(FSKEY_W==key)
		{
			ym2612.initialFeedbackUpdateCycle++;
			printf("%d\n",ym2612.initialFeedbackUpdateCycle);
			wave=MakeSample(ym2612,CONNECT,FB,MULTI);
		}
		else if(FSKEY_S==key)
		{
			ym2612.initialFeedbackUpdateCycle--;
			printf("%d\n",ym2612.initialFeedbackUpdateCycle);
			wave=MakeSample(ym2612,CONNECT,FB,MULTI);
		}
		else if(FSKEY_E==key)
		{
		}
		else if(FSKEY_D==key)
		{
		}
		else if(FSKEY_R==key)
		{
		}
		else if(FSKEY_F==key)
		{
		}


		int wid,hei;
		FsGetWindowSize(wid,hei);
		glViewport(0,0,wid,hei);

		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glBegin(GL_LINE_STRIP);
		for(int x=0; x<wid; ++x)
		{
			int samplePtr=x*4;
			if(samplePtr+3<wave.size())
			{
				int data=wave[samplePtr]+(wave[samplePtr+1]<<8);
				data=(data&0x7FFF)-(data&0x8000);
				glVertex2i(x,hei/2-(data*hei/2)/32768);
			}
		}
		glEnd();

		glBegin(GL_LINES);
		glVertex2i(wid/2,0);
		glVertex2i(wid/2,hei);
		glEnd();

		FsSwapBuffers();
	}

	return 0;
}
