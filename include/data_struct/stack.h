#include "interface/stack_interface.h"

template <typename T>
class Stack : public StackInterface<T> {
 public:
  Stack() {
    this->array_ = new T[100];
    this->top_ = 0;
  }

  bool IsEmpty() { return this->top_ == 0; }

  bool IsNotEmpty() { return this->top_ != 0; }

  void Clean() { this->top_ = 0; }

  void Push(T elem) { this->array_[this->top_++] = elem; }

  void Pop() { --this->top_; }

  T Top() { return this->array_[this->top_ - 1]; }

  ~Stack() { delete this->array_; }

 private:
  T* array_;
  int top_;
};