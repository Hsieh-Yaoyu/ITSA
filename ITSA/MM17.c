//[C_MM17-易] 求最大公因數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6903
#include <math.h>
#include <stdio.h>

int main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int min = num1;
  if (num1 > num2)
    min = num2;
  int gcd = 1;
  for (int i = 1; i <= min; i++)
    if (num1 % i == 0 && num2 % i == 0)
      gcd = i;
  printf("%d\n", gcd);
  return 0;
}