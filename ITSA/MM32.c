//[C_MM32-易] Armstrong數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  int num100, num10, num1;
  while (scanf("%d", &num) != EOF)
  {
    int temp = num;
    num100 = num / 100;
    num = num % 100;
    num10 = num / 10;
    num = num % 10;
    num1 = num;
    if (num100 * num100 * num100 + num10 * num10 * num10 + num1 * num1 * num1 == temp)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}