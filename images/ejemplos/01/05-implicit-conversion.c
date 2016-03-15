#include <stdio.h>

int main()
{
  int x=64, y=357;
  float f=4.95;
  char c;
  c=x;
  printf("x = %d | y = %d | f = %f | c = %d\n", x,y,f,c);
  x=c;
  printf("x = %d | y = %d | f = %f | c = %d\n", x,y,f,c);
  c=y;
  printf("x = %d | y = %d | f = %f | c = %d\n", x,y,f,c);
  y=c;
  printf("x = %d | y = %d | f = %f | c = %d\n", x,y,f,c);
  y=f;
  printf("x = %d | y = %d | f = %f | c = %d\n", x,y,f,c);
  return 0;
}
