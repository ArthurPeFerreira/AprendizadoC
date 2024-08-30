#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

    long int somar_n_primeiros(int n){
        long int a = 0;
        for (size_t i = 0; i < (n +1); i++)
        {
           a = a + i;
        }
        return a;
    }

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int a;

    printf("O programa recebera um numero e irá apresentar a soma dos numeros até chegar no valor recebido.\n");
    printf("Digite o Valor do Número:");
    scanf("%d",&a);

    printf("A somatoria dos números é %ld",somar_n_primeiros(a));

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
} 