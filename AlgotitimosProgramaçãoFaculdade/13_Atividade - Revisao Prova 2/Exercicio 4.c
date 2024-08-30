#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void IdentificaQuadrante(){
    int X,Y;
    //Colocando valores nas variaveis para garantir que entraram no while
    X = 10;
    Y = 10;

    printf("De as cordenadas (X,Y) e o programa dira em qual quadrante está, caso alguma cordenada seja nula o programa encerra");
    
    while (X != 0 && Y != 0)
    {
        printf("\nDe a Cordenada de X: ");
        scanf("%d", &X);
        printf("\nDe a Cordenada de Y: ");
        scanf("%d", &Y);

        if (X == 0 || Y == 0){
            break;
        }else if(X > 0 && Y > 0){
            printf("Primeiro Quadrante");
        }else if(X < 0 && Y > 0){
            printf("Segundo Quadrante");
        }else if(X < 0 && Y < 0){
            printf("Terceiro Quadrante");
        }else if(X > 0 && Y < 0){
            printf("Quarto Quadrante");
        }
        
    }
    
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    IdentificaQuadrante();

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}