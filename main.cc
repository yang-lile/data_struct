#include <iostream>

#include "include/data_struct/stack.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Stack<int> s;
  s.Push(1);
  cout << s.Top() << endl;

  s.Pop();
  cout << s.IsNotEmpty() << endl;
  s.IsEmpty();
  return 0;
}
