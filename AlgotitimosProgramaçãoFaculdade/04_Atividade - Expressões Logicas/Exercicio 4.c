#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>


int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Ano;
    printf("Digite o Ano que você quer descobrir se é Bissexto: ");
    scanf("%d", &Ano);
    printf ("Se o resultado for 1 o ano é bissexto se for 0 não é \nO Resultado é: %d", (Ano % 4) == 0);

SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}