# 数据结构模块

## 使用方法

> 目前 `src/interface` 下的都是做完了的， `src/data_struct/stack.h` 是使用stack来对接口做最后的封装，其他两个都没有实现。

1. `src/interface` 是接口存放的目录
2. 使用时需要自己继承接口，实现每一个接口的定义，将实现的数据结构放到 `src/data_struct` 下，或者自己的工程目录下。（目前）
3. ~~通过 `src/ctbu.cc` 中的命名空间ctbu来封装，使用时自己继承实现，自己调用。（未来）~~

> 其中，stack是为你准备的使用实例，提供了粗糙的实现，并不健壮，但是可用。
> 
> 文件封装直接使用文件流会比较好，这里不再提供封装

__测试方法__

运行 `main.cc` 。

## 代码风格

[参考谷歌开发C++规范](https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/naming/)

## 注意事项

## 应用

阶段性：

1. 课程设计提供接口，不提供任何实现
2. 实现具体逻辑，可以直接使用的代码
3. 导出为动态链接库，直接使用