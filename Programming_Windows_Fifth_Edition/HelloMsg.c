// i686-w64-mingw32-gcc HelloMsg.c -o HelloMsg
// cl demo.c /link User32.lib

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		PSTR szCmdLine, int iCmdShow)
{
	MessageBox(NULL, TEXT("Hello, Windows 98!"), TEXT("HelloMsg"), 0);
	return 0;
}
