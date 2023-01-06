//[C_MM20-易] 十進位轉十六進位
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6912
#include <math.h>
#include <stdio.h>

int main()
{
  int num;
  while ((scanf("%d", &num) != EOF))
  {
    int i = 0;
    int hex[15];
    char dictionary[16] = "0123456789ABCDEF";
    while (num > 0)
    {
      hex[i] = dictionary[num % 16];
      num = num / 16;
      i++;
    }
    i--;
    for (; i >= 0; i--)
      printf("%c", hex[i]);
    puts("");
  }
  return 0;
}