#include "../interface/list_interface.h"

// 模板接口类继承模板接口类
template <typename T>
class SeqList : public ListInterface<T> {
  // 使用私有属性包裹一些重要的参数，只对外提供部分操作函数
  // 所有属性使用全小写加下划线_，并且末尾带下划线_
 private:
  // 指向这个数据结构存储的头指针
  T* head_;

  // 指向这个数据结构的尾部，如果有的话
  T* tail_;

  // 存储了多少元素
  int length_;

  // 最大容量是多少
  int size_;

 public:
};
