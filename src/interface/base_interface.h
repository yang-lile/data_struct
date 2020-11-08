// 接口类，提供判断空的接口
class EmtryInterface {
 protected:
  // 判断为空
  virtual bool IsEmpty() = 0;

  // 判断不为空
  virtual bool IsNotEmpty() = 0;
};

// 接口类，提供长度操作的接口
class LengthInterface {
 private:
  // 修改长度
  virtual void SetLength(int length) = 0;

 protected:
  // 获取长度
  virtual int GetLength() = 0;
};

// 接口类，提供打印操作的接口
class DisplayInterface {
 protected:
  // 打印
  virtual void Display() = 0;
};

// 接口类，提供清空数据结构的操作
class CleanInterface {
 protected:
  // 清空数据结构
  virtual void Clean() = 0;
};
