cmake_minimum_required(VERSION 3.0.0)
project(testProjuct VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# 添加所有源文件
aux_source_directory(. ALL_SCRS)
# 添加子目录
add_subdirectory(src)

add_executable(testProjuct ${ALL_SCRS})
