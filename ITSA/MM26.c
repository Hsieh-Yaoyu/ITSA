//[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6928
#include <stdio.h>

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
    for (int i = 1; i <= num;i++)
      printf("%d*%d=%d\n", i, i, i * i);
  return 0;
}