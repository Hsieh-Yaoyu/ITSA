//[C_MM19-易] 電話費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909
#include <math.h>
#include <stdio.h>

int main()
{
  int min;
  while ((scanf("%d", &min) != EOF))
  {
    if (min <= 800)
      printf("%.1lf\n", min * 0.9);
    else if (min < 1500)
      printf("%.1lf\n", min * 0.9 * 0.9);
    else
      printf("%.1lf\n", min * 0.9 * 0.79);
  }
  return 0;
}