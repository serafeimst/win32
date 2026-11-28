// i686-w64-mingw32-gcc demo.c -o demo

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "Hello mom", "Note", MB_OK);
    return 0;
}