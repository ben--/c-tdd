#include <io/io.h>
#include <translate/translate.h>


int translate()
{
  char buf[10];

  (void)read_input(buf, sizeof(buf));
  write_output(buf, 5);
  return 1;
}

/*   char buf[10]; */
/*   size_t read_len; */

/*   read_len = read_input(buf, sizeof(buf)); */
/*   (void)write_output(buf, read_len); */

/*   return 0; */
/* }  */
