#include <stdio.h>

float cel_to_fahr(float c);

main()
{
  float fahr, cel;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  cel = lower;
  
  while (cel <= upper) {
    fahr = cel_to_fahr(cel);
    printf("%3.0f %6.1f\n", cel, fahr);
    cel = cel + step;
  }

  return 0;
}

float cel_to_fahr(float c)
{
  return (9.0/5.0) * c + 32;
} 
