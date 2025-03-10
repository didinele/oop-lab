add_executable(
  oop

  main.cpp
  thing.cpp
)

target_compile_options(oop PRIVATE -Wall -Wextra -Wpedantic -Werror)

set_property(TARGET oop PROPERTY CXX_STANDARD 98)
target_link_libraries(
  oop
)
