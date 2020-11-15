// 导入基础接口
#include "base_interface.h"

// 组合了判空、长度、打印、清空
// 再定义了基于串的增删改查
class StringInterface : virtual EmptyInterface,
                        virtual LengthInterface,
                        virtual DisplayInterface,
                        virtual CleanInterface {
 protected:
  virtual ~StringInterface() {}

  // 在位序 index 处插入字符 ch ，其他数据向后移动
  virtual void Insert(int index, char ch) = 0;

  // 直接移除 index 处的字符，不提供返回被删除字符的操作
  // 其余字符前移
  virtual void Remove(int index) = 0;

  // 在位序 index 处修改字符为 ch
  virtual void Modify(int index, char ch) = 0;

  // 获取位序为 index 的字符
  virtual char At(int index) = 0;

  // 获取第一个值为 ch 的位序
  virtual int Search(char ch) = 0;
};
