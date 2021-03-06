// 总的基类，保证了以下的类都是同源的，都是用来组合的组件
class BaseInterface {
 protected:
#ifdef DEBUG
  BaseInterface();
#endif
  // 带上析构函数是编码的健壮
  // 不使用接口指针跨级访问是编程规范
  virtual ~BaseInterface() {}

 private:
#ifdef DEBUG
  // 提供一个打日志的方法
  void PrintLog() const;
#endif
};

// 接口类，提供判断空的接口
class EmptyInterface : virtual BaseInterface {
 protected:
#ifdef DEBUG
  EmptyInterface();
#endif

  virtual ~EmptyInterface() {}

  // 判断为空
  virtual bool IsEmpty() = 0;

  // 判断不为空
  virtual bool IsNotEmpty() = 0;
};

// 接口类，提供长度操作的接口
class LengthInterface : virtual BaseInterface {
 protected:
#ifdef DEBUG
  LengthInterface();
#endif

  virtual ~LengthInterface() {}

  // 获取长度
  virtual int GetLength() = 0;

 private:
  // 修改长度
  virtual void SetLength(int length) = 0;
};

// 接口类，提供打印操作的接口
class DisplayInterface : virtual BaseInterface {
 protected:
#ifdef DEBUG
  DisplayInterface();
#endif

  virtual ~DisplayInterface() {}

  // 打印
  virtual void Display() = 0;
};

// 接口类，提供清空数据结构的操作
class CleanInterface : virtual BaseInterface {
 protected:
#ifdef DEBUG
  CleanInterface();
#endif

  virtual ~CleanInterface() {}

  // 清空数据结构
  virtual void Clean() = 0;
};
