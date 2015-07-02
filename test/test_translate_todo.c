static void initial_passing_test(void **state) {
  will_return(read_input, "hello");
  will_return(read_input, 5);
  will_return(write_output, 5);

  expect_value(write_output, buf_len, 5);

  translate();


  (void) state; /* unused */
}

