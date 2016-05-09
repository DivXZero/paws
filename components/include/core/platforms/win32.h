
#ifndef __PAWS_CORE_PLATFORM_WIN32_H
#define __PAWS_CORE_PLATFORM_WIN32_H

#define VC_EXTRALEAN
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "comdlg32.lib")

#endif  // __PAWS_CORE_PLATFORM_WIN32_H
