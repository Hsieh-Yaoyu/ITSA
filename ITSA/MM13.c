//[C_MM13-易] 停車費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6891
#include <math.h>
#include <stdio.h>

int main()
{
  int hr1, hr2, min1, min2;
  scanf("%d %d", &hr1, &min1);
  scanf("%d %d", &hr2, &min2);
  int totalMIN1 = 60 * hr1 + min1;
  int totalMIN2 = 60 * hr2 + min2;
  int total_HalfHR = (int)((totalMIN2 - totalMIN1) / 30);
  int sum = 0;
  if (total_HalfHR > 8) // 超過4小的部分
  {
    sum += 60 * (total_HalfHR - 8);
    total_HalfHR = 8;
  }
  if (total_HalfHR > 4) // 超過2小的部分
  {
    sum += 40 * (total_HalfHR - 4);
    total_HalfHR = 4;
  }
  if (total_HalfHR > 0) // 剩的部分
    sum += 30 * total_HalfHR;
  printf("%d\n", sum);
  return 0;
}