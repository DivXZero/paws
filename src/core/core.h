
#ifndef __PAWS_CORE_H
#define __PAWS_CORE_H

extern "C" {
  __declspec(dllexport) int DoSomething();
}

/*
*   Common Includes
*/
#include <memory.h>

/*
*   Platform Specific Includes
*/

// Windows x86
#ifdef _WIN32

#include "platforms/win32.h"

// Windows x86_64
#ifdef _WIN64
#endif  // _WIN64

#endif  // _WIN32

#endif  // __PAWS_CORE_H
