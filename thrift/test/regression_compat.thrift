namespace cpp test_cpp1.cpp_regression_compat
namespace cpp2 test_cpp2.cpp_regression_compat
namespace d test_d.cpp_regression_compat
namespace java test_java.cpp_regression_compat
namespace java.swift test_swift.cpp_regression_compat
namespace php test_php.cpp_regression_compat
namespace python test_py.cpp_regression_compat

enum repeated_values_enum {
  A = 0,
  B = 0,
  C = 1,
  D = 2,
  E = 3
}

struct template_arguments_struct {
  1: i32 T
  2: i32 U
  3: i32 V
  4: i32 Args
  5: i32 UArgs
  6: i32 VArgs
}

struct template_arguments_union {
  1: i32 T
  2: i32 U
  3: i32 V
  4: i32 Args
  5: i32 UArgs
  6: i32 VArgs
}

enum template_arguments_enum {
  T,
  U,
  V,
  Args,
  UArgs,
  VArgs
}
