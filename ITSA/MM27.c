//[C_MM27-易] 計算兩整數間所有整數的總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
#include <math.h>
#include <stdio.h>

int main()
{
  int num1, num2;
  while (scanf("%d %d", &num1, &num2) != EOF)
  {
    double sum;
    int height = num2 - num1;
    if (height < 0)
      height *= -1;
    sum = ((num1 + num2) * (height+1)) / 2.0;
    printf("%.lf\n", sum);
  }
  return 0;
}