#include <stdio.h>

void modify_my_char(char *cc, char ccc)
{
  *cc = 'o';
  printf("Value of cc: %d\n", cc);
  
  ccc = 'l';
  printf("Value of ccc: %c\n", ccc);
}

int main(void)
{
  char c;
  char *p;

  p = &c;
  c = 'H';

  printf("Value of c before function call: %c\n", c);
  printf("Address of c: %p\n", p);
  printf("Value of p : %p\n", p);
  printf("Address of p: %p\n", p);
  
  modify_my_char(p, c);

  printf("Value of c after function call: %c\n", c);
  return (0);
}
