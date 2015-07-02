#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <string.h>
#include <cmocka.h>

#include <io/io.h>
#include <translate/translate.h>

int read_input(char *buf, size_t buf_len)
{
  (void) memcpy(buf, (const void *)mock(), buf_len);
  return mock();
}

int write_output(const char *buf, size_t buf_len)
{
  check_expected(buf_len);

  return mock();

  (void)buf;
}

static void set_up()
{
  will_return(read_input, "hello");
  will_return(read_input, 5);
  will_return(write_output, 5);

  expect_value(write_output, buf_len, 5);
}


static void the_translate_method_returns_1_on_success(void **state) {
  set_up();

  int i = translate();

  assert_int_equal(i, 1);

  (void) state;
}

static void the_translate_method_gets_its_data_from_read_input(void **state) {
  set_up();

  translate();

  (void) state;
}

static void the_translate_method_sends_its_data_to_write_output(void **state) {
  set_up();

  translate();

  (void) state;
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(the_translate_method_returns_1_on_success),
        cmocka_unit_test(the_translate_method_gets_its_data_from_read_input),
        cmocka_unit_test(the_translate_method_sends_its_data_to_write_output),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
