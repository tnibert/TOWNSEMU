set(TARGET_NAME midi_interface)
if(MSVC)
	add_library(${TARGET_NAME} midi_interface.h midi_interface.cpp windows/midi_implement.cpp)
	target_link_libraries(${TARGET_NAME} winmm.lib)
else()
	add_library(${TARGET_NAME} midi_interface.h midi_interface.cpp null/midi_implement.cpp)
endif()
target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
