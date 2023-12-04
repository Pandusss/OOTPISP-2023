cmake_minimum_required(VERSION 3.5)
project(lab8 LANGUAGES CXX)
add_executable(lab8 
        main.cpp
        AbstractFactory.h
        Builder.h
)
target_link_libraries(lab8 Qt${QT_VERSION_MAJOR}::Widgets)