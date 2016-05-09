
#ifndef __PAWS_CORE_WINDOW_H
#define __PAWS_CORE_WINDOW_H

#include "common.h"

#ifdef _WIN32
#include "platforms/win32.h"
#elif __linux__
#include "platforms/x11.h"
#endif

namespace Paws {

  #ifdef _WIN32
  using WindowRaw = Win32Window;
  #elif __linux__
  using WindowRaw = XWindow;
  #endif

  using WindowPtr = std::shared_ptr<WindowRaw>;

  LIB_EXPORT
  class Window : public Shared::Window {
    void Create() {}

  private:
    WindowPtr m_window;
  };

}

#endif // __PAWS_CORE_WINDOW_H
