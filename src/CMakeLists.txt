include_directories(
  ${PROJECT_SOURCE_DIR}/src/include
)

aux_source_directory(. lib_srcs)    # 添加当前目录下所有的源文件
add_library(src ${lib_srcs})       # 当前目录下的文件生成一个链接库