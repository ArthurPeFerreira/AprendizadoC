#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>


int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    char Caractere;

    printf("Insira um caractere: ");
    scanf("%s", &Caractere);

    if(isupper(Caractere)){
    printf("É uma letra Maiuscula");
    }else if(islower(Caractere)){
    printf("É uma letra Minuscula");
    }else if(isalnum(Caractere)){
    printf("É um Número");
    }
    
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}