#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

/* A test case that does nothing and succeeds. */
static void initial_failing_test(void **state) {
  assert_int_equal(1, 1);
  (void) state; /* unused */
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(initial_failing_test),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
