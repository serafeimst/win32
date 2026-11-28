// i686-w64-mingw32-gcc demo.c -o demo
// cl demo.c /link User32.lib

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "Hello mom", "Demo", MB_OK);
    return 0;
}
