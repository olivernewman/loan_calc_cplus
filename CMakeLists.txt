cmake_minimum_required(VERSION 3.12)
project(LoanCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(LoanCalculator main.cpp InterestCalculator.cpp InterestCalculator.h InterestCalculator.h)