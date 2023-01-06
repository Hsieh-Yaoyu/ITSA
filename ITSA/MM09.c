//[C_MM09-易] 計算 i 次方的值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879
#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    if(num>31){
      printf("Value of more than 31\n");
      continue;
    }
    double accumulation = 1;
    for (int i = 0; i < num;i++)
      accumulation*=2;
    printf("%.lf\n", accumulation);
  }

  return 0;
}