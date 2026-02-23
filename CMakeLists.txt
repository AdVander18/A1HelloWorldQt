cmake_minimum_required(VERSION 3.16)   # Минимальная версия CMake
project(A1HelloWorld VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
# Поиск пакета Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Добавляем исполняемый файл
add_executable(${PROJECT_NAME}
    main.cpp
    MainWindow.cpp
    MainWindow.h
)

# Подключаем библиотеки Qt
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Widgets)
