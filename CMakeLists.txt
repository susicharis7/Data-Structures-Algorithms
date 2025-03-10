cmake_minimum_required(VERSION 3.30)
# specifies the minimum required version of CMake for this project.


project(StudentManagementSystem)
# sets the name of the project to StudentManagementSystem
# this name is primarily used for organizing build files and IDE configurations, but it does not directly affect compilation.

set(CMAKE_CXX_STANDARD 20)
# tells CMake to use C++20 as the langauge standard for compilation

add_executable(StudentManagementSystem main.cpp
        SMSWithEncapsulation/SMS_With_Encapsulation.cpp
        SMSWithEncapsulation/SMS_With_Encapsulation.h
        Generics/StudentGenerics.h
        Generics/RectangleGenerics.h
        # main2.cpp
)
# defines the excecutable target for the project :
    # StudentManagementSystem → The name of the compiled executable that will be created after building the project.
    # main.cpp → The source file that contains the main() function, which serves as the entry point of the program.
