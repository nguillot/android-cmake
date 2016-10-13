set(APP_LIB_HEADER
  cpp/Hello.h
)

set(APP_LIB_SRCS
  cpp/Hello.cpp
)

add_library(
  APPLIB
  ${APP_LIB_HEADER}
  ${APP_LIB_SRCS}
)
