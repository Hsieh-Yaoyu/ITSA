//[C_MM15-易] 判斷座標是否在正方形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897
#include <math.h>
#include <stdio.h>

int main()
{
  int num1, num2;
  while ((scanf("%d %d", &num1, &num2)) != EOF)
  {
    if (num1 > 100 || num2 > 100)
      printf("outside\n");
    else
      printf("inside\n");
  }
  return 0;
}