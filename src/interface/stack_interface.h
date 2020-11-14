// 使用基础接口
#include "base_interface.h"

// 定义成模板类便于代码复用
template <typename T>
class StackInterface : virtual EmptyInterface, virtual CleanInterface {
  // 栈应该有的操作
 protected:
  virtual ~StackInterface() {}

  // 入栈
  virtual void Push(T elem) = 0;

  // 出栈
  virtual void Pop() = 0;

  // 查询栈顶元素
  virtual T Top() = 0;
};
