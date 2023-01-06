//[C_MM21-易] 算階乘
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while ((scanf("%d", &num) != EOF))
  {
    unsigned long long int sum = 1;
    for (int i = 1; i <= num; i++)
      sum *= i;
    printf("%lld\n", sum);
  }
  return 0;
}