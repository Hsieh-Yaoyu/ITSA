//[C_MM30-易] 質數判別
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  while ((scanf("%d", &num)) != EOF)
  {
    int isprime_flag = 1;
    if (num == 1)
      return 0;
    for (int i = 2; i * i <= num; i++)
    {
      if (num % i == 0)
      {
        printf("NO\n");
        isprime_flag = 0;
        break;
      }
    }
    if (isprime_flag)
      printf("YES\n");
  }

  return 0;
}