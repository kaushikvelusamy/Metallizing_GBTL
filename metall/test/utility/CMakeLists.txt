add_executable(bitset_test bitset_test.cpp)
link_gtest_lib(bitset_test)
gtest_discover_tests(bitset_test)