#include <stdio.h>
int main()
{
  int i, number, so = 0, se = 0;
  printf("enter the number\n");
  scanf("%d", &number);
  for (i = 0; i < number; i++)
  {
    if (i % 2 == 0)
    {
      se = se + i;
    }
    else
    {
      so = so + i;
    }
  }
  printf("the sum of even is %d\n", se);
  printf("the sum of odd is %d", so);

  return 0;
}