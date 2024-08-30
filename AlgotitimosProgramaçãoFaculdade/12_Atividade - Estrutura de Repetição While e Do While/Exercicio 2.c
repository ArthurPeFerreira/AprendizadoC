#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int a;

    while (a > 0)
    {
        printf("Digite o Valor de A: ");
        scanf("%d",&a);
        if (a > 0){
        if (a % 2 == 0 )
        {
            printf("O Valor é par\n");
        }else{
            printf("O Valor é impar\n");
        }}
        
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}