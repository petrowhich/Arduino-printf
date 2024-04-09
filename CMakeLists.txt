# Arduino-printf
# https://github.com/petrowhich/Arduino-printf
# GPL-2.0 license

cmake_minimum_required(VERSION 3.5)

idf_component_register(SRCS "printf.cpp" 
                       INCLUDE_DIRS "."
                       REQUIRES arduino)

project(Arduino-printf)
