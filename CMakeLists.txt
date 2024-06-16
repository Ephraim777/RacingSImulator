cmake_minimum_required(VERSION 3.5)
project(RacingSimulator LANGUAGES CXX)

# Установка выходного каталога для всех типов файлов
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Добавление статических флагов
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
set(BUILD_SHARED_LIBRARIES OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -static-libgcc -static-libstdc++")

# Добавление исполняемой цели
add_executable(RacingSimulator
    src/main.cpp 
)

# Подключение поддиректории для RacingLib
add_subdirectory(RacingLib)

# Связывание библиотеки RacingLib с RacingSimulator
target_link_libraries(RacingSimulator PRIVATE RacingLib)

# Установка свойств для конечной цели
set_target_properties(RacingSimulator PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

