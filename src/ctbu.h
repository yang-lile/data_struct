// 为了避免出现和C++的STL库出现冲突，使用命名空间来隔离开
namespace ctbu {
// 顺序表
#include "data_struct/seq_list.h"
template <typename T>
class SeqList;

// 链表
class LinkList;
// 栈
class Stack;
// 队列
class Queue;
// 二叉树
class BinTree;
// 堆
class Heap;
// 图
class Map;
};  // namespace ctbu
