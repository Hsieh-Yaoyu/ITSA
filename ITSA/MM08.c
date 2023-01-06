//[C_MM08-易] 計算兩數和的平方值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6876
#include <math.h>
#include <stdio.h>

int main()
{
  double num1,num2;
  while (scanf("%lf %lf", &num1,&num2) != EOF)
  {
    double sum = num1 + num2;
    double quadratic = sum*sum;
    printf("%.lf\n", quadratic);
  }

  return 0;
}