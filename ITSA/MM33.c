//[C_MM33-易] 找1~N的完美數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    if (num >= 6)
      printf("6");
    for (int i = 28; i <= num; i++)
    {
      int sum = 0;
      for (int j = 1; j < i; j++)
        if (i % j == 0)
          sum += j;
      if (sum == i)
        printf(" %d", i);
    }
    puts("");
  }

  return 0;
}