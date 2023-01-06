//[C_MM28-易] 計算1到N之間屬於5和7的倍數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    if (num >= 35)
      printf("%d", 35);
    for (int i = 70; i <= num; i += 35)
      printf(" %d", i);
    puts("");
  }
  return 0;
}