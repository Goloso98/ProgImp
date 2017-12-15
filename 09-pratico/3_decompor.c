#include <stdio.h>

#define SEG 36506

void decompor(int total_seg, int *horas, int *mins, int *segs)
{
  *horas = total_seg / 60 / 60;
  *mins = (total_seg - (*horas *3600)) / 60;
  *segs = total_seg - (*horas * 3600) - (*mins * 60);
}

int main(void)
{
  int horas, mins, segs;
  decompor(SEG, &horas, &mins, &segs);
  printf("%d = %d:%d:%d\n", SEG, horas, mins, segs);

  return 0;
}
