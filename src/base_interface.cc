#include "base_interface.h"

#include <iostream>

void BaseInterface::PrintLog() const {
  std::cout << typeid(*this).name() << " has been called!" << std::endl;
}

// 初始化时打log
BaseInterface::BaseInterface() { PrintLog(); }

// 初始化时打log
EmptyInterface::EmptyInterface() { PrintLog(); }

// 初始化时打log
LengthInterface::LengthInterface() { PrintLog(); }

// 初始化时打log
DisplayInterface::DisplayInterface() { PrintLog(); }

// 初始化时打log
CleanInterface::CleanInterface() { PrintLog(); }
