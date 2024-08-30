#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);


    float frente, lateral;

    printf("Informe a Lateral: ");
    scanf("%f",&lateral);

    printf("Informe a Frente: ");
    scanf("%f",&frente);

    if (frente > 0 && lateral > 0)
    {
        printf("A área do lote é: %f", lateral*frente);
    }else{
        printf("Alguma área negativa");
    }
    
    return 0;

SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}