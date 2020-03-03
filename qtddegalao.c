#include <stdio.h>

int main(void) {
  int pes,qtgl;
  float qta;
  printf("quantas pessoas virão ?");
  scanf("%d",&pes);
  qta=pes*0.5;
  qtgl=qta/5;
  if (qtgl% 2 != 0)
  {
    qtgl=qtgl+1;
  }
  printf("A quantidade de galoes necessarios sera %d",qtgl);
  return 0;
}
