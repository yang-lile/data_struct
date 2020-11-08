# 数据结构模块

## 使用方法

> 目前 `src/interface` 下的都是做完了的， `src/data_struct/stack.h` 是使用stack来对接口做最后的封装，其他两个都没有实现。

1. `src/interface` 是接口存放的目录
2. 使用时需要自己继承接口，将实现的数据结构放到 `src/data_struct` 下，或者自己的工程目录下。（目前）
3. 通过 `src/ctbu.cc` 中的命名空间ctbu来封装，使用时自己继承实现，自己调用。（未来）

__测试方法__

运行 `test.cc` 。

## 代码风格

[参考谷歌开发C++规范](https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/naming/)

## 注意事项

## 应用

阶段性：

1. 课程设计提供接口，不提供任何实现
2. 实现具体逻辑，可以直接使用的代码
3. 导出为动态链接库，直接使用