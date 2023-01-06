//[C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    int sum = 0;
    for (int i = 6; i <= num; i += 12)
      sum += i;
    printf("%d\n", sum);
  }
  return 0;
}