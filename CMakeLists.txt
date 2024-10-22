cmake_minimum_required(VERSION 3.10)
project(TestProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 确保src目录存在
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/src)
    message(FATAL_ERROR "src directory not found!")
endif()

# 查找src目录下的所有cpp文件
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# 检查是否找到了源文件
if(NOT SOURCE_FILES)
    message(WARNING "No .cpp files found in src directory!")
endif()

set(CMAKE_BUILD_TYPE Debug)

# 为每个cpp文件创建可执行文件
foreach(SOURCE_FILE ${SOURCE_FILES})
    # 获取文件名（不含路径和扩展名）
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
    
    # 添加可执行文件
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})
    
    # 设置可执行文件的输出目录
    set_target_properties(${EXECUTABLE_NAME} 
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )
endforeach()