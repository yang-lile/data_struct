#include "base_interface.h"

template <typename T>
class StackInterface : public EmtryInterface, public CleanInterface {
 protected:
  virtual void Push(T elem) = 0;
  virtual void Pop() = 0;
  virtual T Top() = 0;
};
