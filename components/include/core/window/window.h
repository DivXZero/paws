
#ifndef __PAWS_CORE_WINDOW_H
#define __PAWS_CORE_WINDOW_H

#include "common.h"

#ifdef _WIN32
#include "platforms/win32.h"
#elif __linux__
#include "platforms/x11.h"
#endif

namespace Paws {
/*
  #ifdef _WIN32
  using WindowPtr = std::shared_ptr<Win32Window>;
  using WindowRaw = Win32Window;
  #elif __linux__
  using WindowPtr = std::shared_ptr<XWindow>;
  using WindowRaw = XWindow;
  #endif
*/
  LIB_EXPORT
  class Window : public Shared::Window {
    void create() {}
  };

}

#endif // __PAWS_CORE_WINDOW_H
