//[C_MM16-易] 判斷座標是否在圓形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900
#include <math.h>
#include <stdio.h>

int main()
{
  int num1, num2;
  while ((scanf("%d %d", &num1, &num2)) != EOF)
  {
    if (num1*num1+num2*num2>200*200)
      printf("outside\n");
    else
      printf("inside\n");
  }
  return 0;
}