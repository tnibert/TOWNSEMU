// Register dump for different settings captured using TSUGARU.
unsigned int settings[]=
{
0x01,0x01, // Non-Interlace Virtual 640x819, Visible 640x400, 16/4096 colors
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x031C,0x009C,0x031C,0x0040,0x0360,0x0040,
0x0360,0x0000,0x009C,0x0000,0x0050,0x0000,0x009C,0x0000,0x0050,0x004A,0x0001,0x0000,0x003F,0x0003,0x0000,0x0150,
0x02,0x02, // Non-Interlace Virtual 640x819, Visible 640x400, 16/4096 colors
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x031C,0x009C,0x031C,0x0040,0x0360,0x0040,
0x0360,0x0000,0x009C,0x0000,0x0050,0x0000,0x009C,0x0000,0x0050,0x004A,0x0001,0x0010,0x003F,0x0003,0x0000,0x0150,
0x03,0x03,  // Non-Interlace Virtual 1024x512, Visible 640x480, 16/4096 colors
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x030A,0x008A,0x030A,0x0046,0x0406,0x0046,
0x0406,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x000F,0x0002,0x0000,0x0192,
0x03,0x05,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x030A,0x008A,0x018A,0x0046,0x0406,0x0046,
0x0246,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x0007,0x0002,0x0000,0x0192,
0x03,0x0A,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x030A,0x008A,0x01CA,0x0046,0x0406,0x0046,
0x0226,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0100,0x0058,0x0001,0x0000,0x0007,0x0002,0x0000,0x0192,
0x04,0x04,// Non-Interlace Virtual 1024x512, Visible 640x400 16/4096 colors
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x031C,0x009C,0x031C,0x0040,0x0360,0x0040,
0x0360,0x0000,0x009C,0x0000,0x0080,0x0000,0x009C,0x0000,0x0080,0x004A,0x0001,0x0000,0x000F,0x0003,0x0000,0x0150,
0x04,0x06,
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x031C,0x009C,0x019C,0x0040,0x0360,0x0040,
0x0240,0x0000,0x009C,0x0000,0x0080,0x0000,0x009C,0x0000,0x0080,0x004A,0x0001,0x0000,0x0007,0x0003,0x0000,0x0150,
0x05,0x05, // Non-Interlace Virtual 256x512 Visible 256x256 32768 colors
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x018A,0x008A,0x018A,0x0046,0x0246,0x0046,
0x0246,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x0005,0x0002,0x0000,0x0192,  // SCSEL=00, CLKSEL=10
0x05,0x03,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x018A,0x008A,0x030A,0x0046,0x0246,0x0046,
0x0406,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x000D,0x0002,0x0000,0x0192,
0x05,0x0A,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x018A,0x008A,0x01CA,0x0046,0x0246,0x0046,
0x0226,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0100,0x0058,0x0000,0x0000,0x0005,0x0002,0x0000,0x0192,
0x06,0x04,
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x019C,0x009C,0x031C,0x0040,0x0240,0x0040,
0x0360,0x0000,0x009C,0x0000,0x0080,0x0000,0x009C,0x0000,0x0080,0x004A,0x0001,0x0000,0x000D,0x0003,0x0000,0x0150,
0x06,0x06, // Non-Interlace Virtual 256x512 Visible 256x256 32768 colors
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x019C,0x009C,0x019C,0x0040,0x0240,0x0040,
0x0240,0x0000,0x009C,0x0000,0x0080,0x0000,0x009C,0x0000,0x0080,0x004A,0x0001,0x0000,0x0005,0x0003,0x0000,0x0150, // SCSEL=00, CLKSEL=11
0x07,0x07, // Interlace Virtual 256x512 Visible 256x240 32768 colors
0x0086,0x0610,0x0000,0x0000,0x071B,0x0006,0x000C,0x0012,0x020C,0x0129,0x0529,0x0129,0x0529,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0129,0x0000,0x0080,0x0000,0x0129,0x0000,0x0080,0x0064,0x0001,0x0303,0x0005,0x000C,0x0003,0x01CA,
0x07,0x09,
0x0086,0x0610,0x0000,0x0000,0x071B,0x0006,0x000C,0x0012,0x020C,0x0129,0x0529,0x0129,0x06C9,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0129,0x0000,0x0080,0x0000,0x0129,0x0000,0x0100,0x0064,0x0001,0x0303,0x0005,0x000C,0x0003,0x01CA,
0x08,0x08, // Interlace Virtual 256x512 Visible 256x240 32768K colors
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020B,0x00E7,0x04E7,0x00E7,0x04E7,0x002A,0x020A,0x002A,
0x020A,0x0000,0x00E7,0x0000,0x0080,0x0000,0x00E7,0x0000,0x0080,0x0056,0x0001,0x0303,0x0005,0x0001,0x0002,0x0188, // SCSEL=00, CLKSEL=01
0x08,0x0B,
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020B,0x00E7,0x04E7,0x00E7,0x05E7,0x002A,0x020A,0x002A,
0x020A,0x0000,0x00E7,0x0000,0x0080,0x0000,0x00E7,0x0000,0x0100,0x0056,0x0001,0x0303,0x0005,0x0001,0x0002,0x0188,
0x09,0x07,
0x0086,0x0610,0x0000,0x0000,0x071B,0x0006,0x000C,0x0012,0x020C,0x0129,0x06C9,0x0129,0x0529,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0129,0x0000,0x0100,0x0000,0x0129,0x0000,0x0080,0x0064,0x0001,0x0303,0x0005,0x000C,0x0003,0x01CA,
0x09,0x09, // Interlacce Virtual 512x256, Visible 360x240, 32768 colors
0x0086,0x0610,0x0000,0x0000,0x071B,0x0006,0x000C,0x0012,0x020C,0x0129,0x06C9,0x0129,0x06C9,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0129,0x0000,0x0100,0x0000,0x0129,0x0000,0x0100,0x0064,0x0001,0x0303,0x0005,0x000C,0x0003,0x01CA, // SCSEL=11, CLKSEL=00
0x0A,0x03,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x01CA,0x008A,0x030A,0x0046,0x0226,0x0046,
0x0406,0x0000,0x008A,0x0000,0x0100,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x000D,0x0002,0x0000,0x0192,
0x0A,0x05,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x01CA,0x008A,0x018A,0x0046,0x0226,0x0046,
0x0246,0x0000,0x008A,0x0000,0x0100,0x0000,0x008A,0x0000,0x0080,0x0058,0x0000,0x0000,0x0005,0x0002,0x0000,0x0192,
0x0A,0x0A, // Virtual 512x256, Visible 320x240 Non-Interlace
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x01CA,0x008A,0x01CA,0x0046,0x0226,0x0046,
0x0226,0x0000,0x008A,0x0000,0x0100,0x0000,0x008A,0x0000,0x0100,0x0058,0x0001,0x0000,0x0005,0x0002,0x0000,0x0192,
0x0B,0x08,
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020B,0x00E7,0x05E7,0x00E7,0x04E7,0x002A,0x020A,0x002A,
0x020A,0x0000,0x00E7,0x0000,0x0100,0x0000,0x00E7,0x0000,0x0080,0x0056,0x0001,0x0303,0x0005,0x0001,0x0002,0x0188,
0x0B,0x0B,
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020B,0x00E7,0x05E7,0x00E7,0x05E7,0x002A,0x020A,0x002A,
0x020A,0x0000,0x00E7,0x0000,0x0100,0x0000,0x00E7,0x0000,0x0100,0x0056,0x0001,0x0303,0x0005,0x0001,0x0002,0x0188,
0x0C,0xFF,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x030A,0x008A,0x030A,0x0046,0x0406,0x0046,
0x0406,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0000,0x000F,0x0002,0x0000,0x0192,
0x0D,0xFF,
0x0040,0x0320,0x0000,0x0000,0x035F,0x0000,0x0010,0x0000,0x036F,0x009C,0x031C,0x009C,0x031C,0x0040,0x0360,0x0040,
0x0360,0x0000,0x009C,0x0000,0x0080,0x0000,0x009C,0x0000,0x0080,0x004A,0x0001,0x0000,0x000F,0x0003,0x0000,0x0150,
0x0E,0xFF,
0x0086,0x0610,0x0000,0x0000,0x071B,0x0006,0x000C,0x0012,0x020C,0x0129,0x06C9,0x0129,0x06C9,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0129,0x0080,0x0100,0x0000,0x0129,0x0080,0x0100,0x0064,0x0001,0x0101,0x000F,0x000C,0x0003,0x01CA,
0x0F,0xFF,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x008A,0x030A,0x008A,0x030A,0x0046,0x0406,0x0046,
0x0406,0x0000,0x008A,0x0000,0x0080,0x0000,0x008A,0x0000,0x0080,0x0058,0x0001,0x0101,0x000A,0x0002,0x0000,0x0192,
0x10,0xFF,
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020C,0x00E7,0x05E7,0x00E7,0x05E7,0x002A,0x020A,0x002A,
0x020A,0x0000,0x00E7,0x0080,0x0100,0x0000,0x00E7,0x0080,0x0100,0x0056,0x0001,0x0303,0x000A,0x0001,0x0002,0x0188,
0x11,0xFF,
0x0060,0x02C0,0x0000,0x0000,0x031F,0x0000,0x0004,0x0000,0x0419,0x00CA,0x02CA,0x00CA,0x02CA,0x0046,0x0406,0x0046,
0x0406,0x0000,0x00CA,0x0000,0x0080,0x0000,0x00CA,0x0000,0x0080,0x0058,0x0001,0x0000,0x000A,0x0002,0x0000,0x0192,
0x12,0xFF,
0x0074,0x0530,0x0000,0x0000,0x0617,0x0006,0x000C,0x0012,0x020C,0x0167,0x0567,0x0167,0x0567,0x002A,0x020A,0x002A,
0x020A,0x0000,0x0167,0x0080,0x0100,0x0000,0x0167,0x0080,0x0100,0x0056,0x0001,0x0101,0x000A,0x0001,0x0002,0x0188,
};



#include <stdio.h>
#include <vector>

enum
{
	REG_HSW1=   0x00,
	REG_HSW2=   0x01,
	REG_UNUSED1=0x02,
	REG_UNUSED2=0x03,
	REG_HST=    0x04,
	REG_VST1=   0x05,
	REG_VST2=   0x06,
	REG_EET=    0x07,
	REG_VST=    0x08,
	REG_HDS0=   0x09,
	REG_HDE0=   0x0A,
	REG_HDS1=   0x0B,
	REG_HDE1=   0x0C,
	REG_VDS0=   0x0D,
	REG_VDE0=   0x0E,
	REG_VDS1=   0x0F,
	REG_VDE1=   0x10,
	REG_FA0=    0x11,
	REG_HAJ0=   0x12,
	REG_FO0=    0x13,
	REG_LO0=    0x14,
	REG_FA1=    0x15,
	REG_HAJ1=   0x16,
	REG_FO1=    0x17,
	REG_LO1=    0x18,
	REG_EHAJ=   0x19,
	REG_EVAJ=   0x1A,
	REG_ZOOM=   0x1B,
	REG_CR0=    0x1C,
	REG_CR1=    0x1D,
	REG_FR=     0x1E,
	REG_CR2=    0x1F,
};

const unsigned int clockTable[]={28,24,25,21};

// Looks like:
//   When CLKSEL is:
//     0 (28MHz), X origin is 297  Width=(HDEx-HDSx)/prescaler
//     1 (24MHz), X origin is 231  Width=(HDEx-HDSx)/4 ???
//     2 (25MHz), X origin is 138  Width=(HDEx-HDSx)/prescaler
//     3 (21MHz), X origin is 156  Width=(HDEx-HDSx)/prescaler
// Bytes-per-line
// 2-page mode:
//   (LOx-FOx)*4
// 1-page mode:
//   (LOx-FOx)*8

void PrintSettings(unsigned int settings[])
{
	auto regs=settings+2;

	printf("--------\n");
	printf("Page 0: %u\n",settings[0]);
	printf("Page 1: %u\n",settings[1]);

	printf("HDS0=%5u,  HDE0=%5u,  HDE0-HDS0=%5u\n",regs[REG_HDS0],regs[REG_HDE0],regs[REG_HDE0]-regs[REG_HDS0]);
	printf("HDS1=%5u,  HDE1=%5u,  HDE1-HDS1=%5u\n",regs[REG_HDS1],regs[REG_HDE1],regs[REG_HDE1]-regs[REG_HDS1]);
	printf("HAJ0=%5u,  HAJ1=%5u\n",regs[REG_HAJ0],regs[REG_HAJ1]);
	auto HST=(regs[REG_HST]>>1);
	auto HSW1=(regs[REG_HSW1]>>1);
	printf("HST=%5u  HSW1=%5u\n",HST,HSW1);

	printf("VDS0=%5u,  VDE0=%5u,  VDE0-VDS0=%5u\n",regs[REG_VDS0],regs[REG_VDE0],regs[REG_VDE0]-regs[REG_VDS0]);
	printf("VDS1=%5u,  VDE1=%5u,  VDE1-VDS1=%5u\n",regs[REG_VDS1],regs[REG_VDE1],regs[REG_VDE1]-regs[REG_VDS1]);
	printf("VDS1-VST2=%5u\n",regs[REG_VDS0-REG_VST2]);
	printf("VST=%5u\n",regs[REG_VST]);

	printf("FO0=%5u  LO0=%5u  FO1=%5u  LO1=%5u\n",regs[REG_FO0],regs[REG_LO0],regs[REG_FO1],regs[REG_LO1]);

	auto SCSEL=(regs[REG_CR1]>>2)&3;
	auto CLKSEL=regs[REG_CR1]&3;
	printf("CR1=%04xH,  SCSEL=%2d,  CLKSEL=%2d\n",regs[REG_CR1],SCSEL,CLKSEL);
	printf("Clock:%dMHz, Clock/PreScalar:%dMHz\n",clockTable[CLKSEL],clockTable[CLKSEL]/(SCSEL+1));
}

void PrintProbablyBytesPerLine(unsigned int settings[],int mode)
{
	auto regs=settings+2;

	int scale=(mode<=11 ? 4 : 8);

	if(settings[0]==mode)
	{
		printf("MODE:%02d  FOx=%3u  LOx=%03u  (LOx-FOx)*%d=%04u\n",
		    mode,
		    regs[REG_FO0],
		    regs[REG_LO0],
		    scale,
		    (regs[REG_LO0]-regs[REG_FO0])*scale);
	}
	if(settings[1]==mode)
	{
		printf("MODE:%02d  FOx=%3u  LOx=%03u  (LOx-FOx)*%d=%04u\n",
		    mode,
		    regs[REG_FO1],
		    regs[REG_LO1],
		    scale,
		    (regs[REG_LO1]-regs[REG_FO1])*scale);
	}
}

void PrintHSWandPrescaler(unsigned int settings[])
{
	auto regs=settings+2;

	if(settings[0]==settings[1] || 0xff==settings[1])
	{
		printf("MODE:%2u  ",settings[0]);
		printf("HDS0=%5u  HDE0=%5u  HDE0-HDS0=%5u  ",regs[REG_HDS0],regs[REG_HDE0],regs[REG_HDE0]-regs[REG_HDS0]);
		auto SCSEL=(regs[REG_CR1]>>2)&3;
		auto CLKSEL=regs[REG_CR1]&3;
		printf("CR1=%04xH  SCSEL=%2d  CLKSEL=%2d  ",regs[REG_CR1],SCSEL,CLKSEL);
		printf("Prescale=%d  ZOOM=%04x\n",(SCSEL+1)*2,regs[REG_ZOOM]);
	}
}

void PrintMinimumHScalingAndHSW(unsigned int n,const unsigned int settings[])
{
	std::vector <const unsigned int *> scalingToSetting[16];
	for(int i=0; i+34<=n; i+=34)
	{
		if(settings[i]==settings[i+1] || 0xFF==settings[i+1])
		{
			auto regs=settings+i+2;
			auto ZH0=regs[REG_ZOOM]&15;
			scalingToSetting[ZH0].push_back(settings+i);
		}
	}

	for(unsigned int i=0; i<4; ++i)
	{
		if(0<scalingToSetting[i].size())
		{
			printf("ZH=%d\n",i);
			for(auto setting : scalingToSetting[i])
			{
				auto regs=setting+2;

				auto CLKSEL=regs[REG_CR1]&3;
				auto SCSEL=(regs[REG_CR1]>>2)&3;
				auto KHz=(clockTable[CLKSEL]*1000)/regs[REG_HST];

				printf("Mode %02d %dKHz [SCSEL%2d FO0%3X HDE0-HDS0 %4d HST %04X HSW1 %04X HSW2 %04X]\n",
					setting[0],
					KHz,
					SCSEL,
					regs[REG_FO0],
					regs[REG_HDE0]-regs[REG_HDS0],
					regs[REG_HST],
					regs[REG_HSW1],
					regs[REG_HSW2]);
			}
		}
	}
}

void PrintVertecalResolution(const unsigned int setting[])
{
	if(setting[0]==setting[1] || 255==setting[1])
	{
		auto regs=setting+2;

		auto CLKSEL=regs[REG_CR1]&3;
		auto SCSEL=(regs[REG_CR1]>>2)&3;
		auto KHz=(clockTable[CLKSEL]*1000)/regs[REG_HST];

		printf("Mode %02d %dKHz [SCSEL%2d VST %04d VDE0-VDS0 %4d FO0 %04X LO0 %04X]\n",
			setting[0],
			KHz,
			SCSEL,
			regs[REG_VST],
			regs[REG_VDE0]-regs[REG_VDS0],
			regs[REG_FO0],
			regs[REG_LO0]
			
		);
	}
}

void PrintCLKSELandDisplayStart(unsigned int n,const unsigned int settings[])
{
	std::vector <const unsigned int *> clkSelToSetting[4];
	for(int i=0; i+34<=n; i+=34)
	{
		if(settings[i]==settings[i+1] || 0xFF==settings[i+1])
		{
			auto regs=settings+i+2;
			auto CLKSEL=regs[REG_CR1]&3;
			clkSelToSetting[CLKSEL].push_back(settings+i);
		}
	}

	for(unsigned int i=0; i<4; ++i)
	{
		if(0<clkSelToSetting[i].size())
		{
			printf("CLKSEL=%d\n",i);
			for(auto setting : clkSelToSetting[i])
			{
				auto regs=setting+2;

				auto CLKSEL=regs[REG_CR1]&3;
				auto SCSEL=(regs[REG_CR1]>>2)&3;
				auto KHz=(clockTable[CLKSEL]*1000)/regs[REG_HST];

				printf("Mode %02d %dKHz [SCSEL%2d HDS0:%04x VDS0:%04x HAJ0:%04x]\n",
					setting[0],
					KHz,
					SCSEL,
					regs[REG_HDS0],
					regs[REG_VDS0],
					regs[REG_HAJ0]);
			}
		}
	}
}

int main(void)
{
	for(int i=0; i+34<=sizeof(settings)/(sizeof(settings[0])); i+=34)
	{
		PrintSettings(settings+i);
	}

	// See bytes-per-line
	//for(int mode=0; mode<=18; ++mode)
	//{
	//	for(int i=0; i+34<=sizeof(settings)/(sizeof(settings[0])); i+=34)
	//	{
	//		PrintProbablyBytesPerLine(settings+i,mode);
	//	}
	//}

	// for(int i=0; i+34<=sizeof(settings)/(sizeof(settings[0])); i+=34)
	// {
	// 	PrintHSWandPrescaler(settings+i);
	// }

	// PrintMinimumHScalingAndHSW(sizeof(settings)/(sizeof(settings[0])),settings);

	//for(int i=0; i+34<=sizeof(settings)/(sizeof(settings[0])); i+=34)
	//{
	//	PrintVertecalResolution(settings+i);
	//}

	PrintCLKSELandDisplayStart(sizeof(settings)/(sizeof(settings[0])),settings);

	return 0;
}
