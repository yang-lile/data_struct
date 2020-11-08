/// 这是一个数据结构的基类
/// 用于描述涉及的基础参数和基础的运算

// 这是一个模板类，之后的所有代码都是用模板类来继承和编写
template <typename T>
class BaseStruct {
 protected:
  // /// 判断为空
  // virtual bool IsEmtry() = 0;

  // // 判断不为空
  // virtual bool IsNotEmtry() = 0;

  // // 获取元素长度
  // virtual int GetLength() =  0;

  // // 打印函数
  // virtual void Display() = 0;

  // // 清空函数
  // virtual void Clear() = 0;

  // // 给定一个数组的初始化
  // virtual BaseStruct(T* head, int length) = 0;

  // // 给定一个vector的初始化
  // BaseStruct(std::vector<T> array, int length) = 0;

  // // 使用`n`个T类型的`data`来初始化
  // virtual BaseStruct(T data, int n) = 0;

  // // 根据指定的索引`position`来添加
  // virtual void InsertByIndex(T data, T* position) = 0;

  // // 添加到末尾
  // virtual void InsertBack(T data) = 0;

  // // 添加到开头
  // virtual void InsertFront(T data) = 0;

  // // 根据指定的索引`position`来删除
  // // return 被删除的元素
  // virtual T RemoveByIndex(T* position) = 0;

  // // 根据指定值`value`来删除
  // // return 被删除的元素
  // virtual T RemoveByValue(T value) = 0;

  // // 根据给定的索引来修改
  // virtual void ReplaceByIndex(T data, T* position) = 0;

  // // 根据给定的值来修改
  // // 如果指定`times`，则可以指定修改的次数
  // virtual void ReplaceByValue(T old_data, T new_data, int times = 1) = 0;

  // // 根据索引来找值
  // virtual T Find(int value) = 0;

  // // 根据值来找索引
  // virtual int Search(T data) = 0;

  // // 获取数据结构的头节点索引
  // virtual T* GetHead() = 0;

  // // 获取结构的尾节点索引
  // virtual T* GetTail() = 0;
};
