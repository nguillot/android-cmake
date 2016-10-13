# - Use C++11 standard
#
# Author:
#   Kevin M. Godby <kevin@godby.org>
#

# Note that Microsoft Visual C++ compiler enables C++11 by default

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_COMPILER_IS_GNUCXX)
  include(CheckCXXCompilerFlag)
  check_cxx_compiler_flag(--std=c++11 SUPPORTS_STD_CXX11)
  if(SUPPORTS_STD_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
    if(CMAKE_GENERATOR MATCHES "Xcode")
      set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++11")
      set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
    endif()
  else()
    message(FATAL_ERROR "Compiler does not support --std=c++11")
  endif()
endif()
