// 导入基础接口
#include "base_interface.h"

// 组合了判空、长度、打印、清空
// 再定义了基于线性表的增删改查
template <typename T>
class ListInterface : public EmptyInterface,
                      public LengthInterface,
                      public DisplayInterface,
                      public CleanInterface {
 protected:
  ~ListInterface() = 0;
  // 在位序 index 处插入元素 elem ，其他数据向后移动
  virtual void InsertElem(int index, T elem) = 0;

  // 直接移除 index 处的元素，不提供返回被删除元素的操作
  // 其余元素前移
  virtual void RemoveElem(int index) = 0;

  // 在位序 index 处修改元素为 elem
  virtual void ModifyElem(int index, T elem) = 0;

  // 获取位序为 index 的元素
  virtual T GetElem(int index) = 0;

  // 获取第一个值为 elem 的位序
  virtual int SearchElem(T elem) = 0;
};
