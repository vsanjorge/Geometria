#include <stdio.h>
#include <math.h>

int main(void) {
  float c1;
  float c2;
  float h;
  float A;
  float p;

  printf("Introduce el valor de los catetos:\n");
  scanf("%f %f", &c1, &c2);

  h = sqrt(pow(c1,2)+pow(c2,2));
  A = (c1*c2)/2;
  p = h+c1+c2;

  printf("\nLa hipotenusa de tu triángulo es: %.2f",h);
  printf("\nEl área de tu triángulo es: %.2f",A);
  printf("\nEl perímetro de tu triángulo es: %.2f",p);

  return 0;
}