
#ifndef __PAWS_CORE_SHARED_APPLICATION_H
#define __PAWS_CORE_SHARED_APPLICATION_H

namespace Paws {
  namespace Shared {

    class Application {
    public:
      virtual void OnInit() = 0;
      virtual void OnUpdate() = 0;
      virtual void OnExit() = 0;
    };

  }
}

#endif // __PAWS_CORE_SHARED_APPLICATION_H
