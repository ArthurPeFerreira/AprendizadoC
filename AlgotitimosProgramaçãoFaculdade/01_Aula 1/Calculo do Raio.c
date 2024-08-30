#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main()
{
    float raio;
    float area;
    printf("Escreva o Valor do Raio: ");
    scanf("%f", &raio);

    area = (M_PI * pow(raio, 2.0));
    printf("O valor da área é: %.3f\n", area);

    return 0;

    sleep(5);
}


