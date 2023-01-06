//[C_MM11-易] 購票計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6885
#include <math.h>
#include <stdio.h>

int main()
{
  int cost;
  scanf("%d", &cost);
  printf("NT10=%d\n", cost / 10);
  cost = cost % 10;
  printf("NT5=%d\n", cost / 5);
  cost = cost % 5;
  printf("NT1=%d\n", cost);

  return 0;
}