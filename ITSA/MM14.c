//[C_MM14-易] 計算時間的組合
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
#include <math.h>
#include <stdio.h>

int main()
{
  int time;
  scanf("%d", &time);
  int days = time / (60*60*24);
  time = time % (60 * 60 * 24);
  int hours = time / (60*60);
  time = time % (60 * 60);
  int minutes = time / 60;
  time = time % 60;
  int seconds = time;
  printf("%d days\n%d hours\n%d minutes\n%d seconds\n", days, hours, minutes, seconds);
  return 0;
}