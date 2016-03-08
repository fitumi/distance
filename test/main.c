#define CTEST_MAIN

#include <ctest.h>

CTEST(fail_suite, fail_test) {
    ASSERT_TRUE(1);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
