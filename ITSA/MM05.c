//[C_MM05-易] 計算正方形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
#include <math.h>
#include <stdio.h>

int main()
{
  double num;
  double area;
  while (scanf("%lf", &num) != EOF)
  {
    area = pow(num, 2);
    printf("%.1lf\n", (int)((area * 10) + 0.5) / 10.0);
  }

  return 0;
}