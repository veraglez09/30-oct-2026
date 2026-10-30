#include <stdio.h>

int main();
float triangulo(int base, int altura);
float trapecio(int bma, int bme, int alt);
int rectangulo(int base, int alt);

void main()
{
  int op;
  float rest = 0;

  do
  {
     //op = 0;
     op = menu();
  }
  while (op < 1 || op < 3);

  switch (op)
  {
  case l:
    int base, alt;
    printf("Dame la base del triangulo: ");
    sacnf("%d", &base);
    printf("Dame la altura del triangulo: ");
    scanf("%d", &alt);
    res = triangulo(base, alt);
    break;

  case 2:
    int bma, bme, alt;
    printf("Dame la base mayor del trapecio: ");
    scanf("%d", &bma);
    printf("Dame la base menor del trapecio: ");
    sacnf("%d", &bme);
    printf("Dame la altura del trapecio: ");
    scanf("%d", &alt);
    res = trapecio(bma, bme, alt);
    break;

  case 3:
    int base, alt;
    printf("Dame la base del rectangulo: ");
    scanf("%d", &base);
    printf("Dame la altura del rectangulo : ");
    scanf("%d", &alt);
    res = rectangulo( base, alt);
    break;

  default;
    break;
  }

