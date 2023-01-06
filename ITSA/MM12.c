//[C_MM12-易] 相遇時間計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
#include <math.h>
#include <stdio.h>

int main()
{
  double distance;
  while(scanf("%lf", &distance)!=EOF){
  double time;
  time = distance / (1.0 - 0.3 * 2.54);
  if (time > (int)time)
    printf("%d\n", (int)time + 1);
  else
    printf("%d\n", (int)time);
  }
  return 0;
}