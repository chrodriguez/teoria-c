#include <stdio.h>
#define delta 0.1F
int main()
{
  float 
    l = 0.0F,
    f = l+delta;
  do {
    if ((f-l) - delta != 0.0F)
    {
      printf ("ERROR => %f - %f != %f xq da '%e'\n", f, l, delta, f-l);
    }
    else
    {
      printf("OK => %f - %f == %f\n", f, l, delta);
    }
    l+= delta;
    f+= delta;
  } while(l < 1.0F);
  return 0;
}
