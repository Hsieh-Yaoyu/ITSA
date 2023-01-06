//[C_MM04-易] 計算總和、乘積、差、商和餘數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2916
#include <stdio.h>

int main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  printf("%d+%d=%d\n", num1, num2, num1 + num2);
  printf("%d*%d=%d\n", num1, num2, num1 * num2);
  printf("%d-%d=%d\n", num1, num2, num1 - num2);
  if (num1 >= 0 || num1%num2==0)
    printf("%d/%d=%d...%d\n", num1, num2, (int)num1 / num2, num1 % num2);
  else
    printf("%d/%d=%d...%d\n", num1, num2, (int)num1 / num2-1, num1 % num2 + num2);
  return 0;
}