#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>


int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Num;
    printf("Digite o Número que você quer descobrir se ele é par ou impar: ");
    scanf("%d", &Num);


    if(((Num % 2) == 0)){
        printf("O númerio é par");
    }else{
        printf("O númerio é impar");
    }
    
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}