//[C_MM07-易] 計算平方值與立方值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6873
#include <math.h>
#include <stdio.h>

int main()
{
  double num;
  while (scanf("%lf", &num) != EOF)
  {
    double quadratic = num*num;
    double cubed = num*num*num;
    printf("%.lf %.lf %.lf\n", num,quadratic,cubed);
  }

  return 0;
}