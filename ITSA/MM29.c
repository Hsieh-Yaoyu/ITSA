//[C_MM29-易] 最大質數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6935
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  while ((scanf("%d", &num)) != EOF)
  {
    int maxprime;
    if (num == 1)
      return 0;
    for (int i = 2; i < num; i++)//比num小的一個一個看
    {
      int Isprime_Flag = 1;
      for (int j = 2; j * j <= i; j++)//看這個是不是質數
      {
        if (i % j == 0)
        {
          Isprime_Flag = 0;
          break;
        }
      }
      if (Isprime_Flag)
        maxprime = i;
    }
    printf("%d\n", maxprime);
  }

  return 0;
}