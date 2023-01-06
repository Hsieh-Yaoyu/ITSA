//[C_MM01-易] 計算梯型面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <math.h>
#include <stdio.h>

int main()
{
  double topline, baseline, height;
  double area;
  while (scanf("%lf %lf %lf", &topline, &baseline, &height) != EOF)
  {
    area = ((topline + baseline) * height) / 2.0;
    printf("Trapezoid area:%.1lf\n", area);
  }

  return 0;
}