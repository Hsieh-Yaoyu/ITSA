//[C_MM42-中] 求(-1)^(n+1)*[1/(2n-1)]的和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6961
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    double sum = 0;
    for (int i = 1; i <= num; i++)
    {
      if (i % 2 == 0)
        sum -= 1.0 / (2.0 * i - 1.0);
      else
        sum += 1.0 / (2.0 * i - 1.0);
    }
    printf("%.3lf\n", (int)((sum * 1000) + 0.5) / 1000.0);
  }
  return 0;
}