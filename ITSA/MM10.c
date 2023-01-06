//[C_MM10-易] 攝氏溫度轉華式溫度
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
#include <math.h>
#include <stdio.h>

int main()
{
  double C;
  while (scanf("%lf", &C) != EOF)
  {
    double F = (C * 9) / 5 + 32;
    printf("%.1lf\n", (int)((F * 10) + 0.5) / 10.0);
  }

  return 0;
}