// 导入基础接口
#include "base_interface.h"

// 组合了判空、长度、打印、清空
// 再定义基于树的操作
template <typename T>
class TreeInterface : virtual EmptyInterface,
                      virtual LengthInterface,
                      virtual DisplayInterface,
                      virtual CleanInterface {
 protected:
  virtual ~TreeInterface() {}

  // 获取树的高度
  virtual int GetDepth() = 0;
};
