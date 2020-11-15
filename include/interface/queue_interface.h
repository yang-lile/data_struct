// 使用基础接口
#include "base_interface.h"

// 定义成模板类便于代码复用
template <typename T>
class QueueInterface : virtual EmptyInterface, virtual CleanInterface {
 protected:
  virtual ~QueueInterface() {}

  // 入队
  virtual void Push(T elem) = 0;

  // 出队
  virtual void Pop() = 0;

  // 查询队头元素
  virtual T Top() = 0;
};
