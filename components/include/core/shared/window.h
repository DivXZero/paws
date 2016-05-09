
#ifndef __PAWS_CORE_SHARED_WINDOW_H
#define __PAWS_CORE_SHARED_WINDOW_H

namespace Paws {
  namespace Shared {

    class Window {
    public:
      virtual void Create() = 0;

      bool IsOpen() { return m_isOpen; }

    protected:
      bool m_isOpen;
    };

  }
}

#endif // __PAWS_CORE_SHARED_WINDOW_H
