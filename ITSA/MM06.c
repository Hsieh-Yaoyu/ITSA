//[C_MM06-易] 英哩轉公里
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6870
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
    printf("%.1lf\n", (int)((num * 1.6 * 10) + 0.5) / 10.0);
  return 0;
}