//[C_MM25-易] 計算正整數被3整除之數值之總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    int top=num;
    if(num%3==1)
      top = num - 1;
    if(num%3==2)
      top = num - 2;
    int sum=0;
    if(top>=3)
      sum = ((3 + top) * (top/3)) / 2.0;
    printf("%d\n", sum);
  }
  return 0;
}