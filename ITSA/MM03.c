//[C_MM03-易] 兩數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6861
#include <math.h>
#include <stdio.h>

int main()
{
  double num1, num2;
  double sum;
  while (scanf("%lf %lf", &num1, &num2) != EOF)
  {
    sum = num1 + num2;
    printf("%.lf\n", sum);
  }

  return 0;
}