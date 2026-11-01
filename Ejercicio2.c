#include <stdio.h>

int menu();

float triangulo(int base, int altura);
float trapecio(int bma, int bme, int alt);
float rectangulo(int base, int alt);

void main()
{
  int op;
  float res = 0;

    do
    {
       //op = 0; 
       op = menu();
    }
    while (op < 1 || op > 3);

    switch (op)
    {
      case 1:
      {
        int base, alt;
        printf("Dame la base del triangulo: ");
        scanf("%d", &base);
        printf("Dame la altura del triangulo: ");
        scanf("%d", &alt);
        res = triangulo(base, alt);
        break;
      }
      
      case 2:
      {
        int bma, bme, alt;
        printf("Dame la base mayor del trapecio: ");
        scanf("%d", &bma);
        printf("Dame la base menor del trapecio: ");
        scanf("%d", &bme);
        printf("Dame la altura del trapecio: ");
        scanf("%d", &alt);
        res = trapecio(bma, bme, alt);
        break;
      }
      
      case 3:
      {
        int base, alt;
        printf("Dame la base del rectangulo: ");
        scanf("%d", &base);
        printf("Dame la altura del rectangulo : ");
        scanf("%d", &alt);
        res = rectangulo( base, alt);
        break;
      }
        default:
          break;
    }

    printf("El area total es de %f metros cuadrados, \n", res);
    }

int menu()
{
  int op;

  printf("Calcular el area de:\n");
  printf("1 - Area de un triangulo.\n");
  printf("2 - Area de un trapecio.\n");
  printf("3 - Area de un rectangulo.\n");
  scanf("%d", &op);
  return op;
}

float triangulo(int base, int alt)
{
  float res;
  res = (base * alt) / 2;
  return res;
}

float trapecio (int bma, int bme, int alt)
{
  float res;
  res = ((bma + bme) * alt) / 2;
  return res;
}

float rectangulo(int base, int alt)
{
  float res;
  res = base * alt;
  return res;
}
