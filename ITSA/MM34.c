//[C_MM34-易] 因數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while ((scanf("%d", &num) != EOF))
  {
    printf("1");
    for (int i = 2; i <= num; i++)
      if (num % i == 0)
        printf(" %d", i);
    puts("");
  }
  return 0;
}