//[C_MM02-易] 計算三角形面積
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858
#include <math.h>
#include <stdio.h>

int main()
{
  double baseline, height;
  double area;
  while (scanf("%lf %lf", &baseline, &height) != EOF)
  {
    area = (baseline * height) / 2.0;
    printf("%.1lf\n", area);
  }

  return 0;
}