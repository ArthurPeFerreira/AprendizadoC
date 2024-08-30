#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

//Codigo que gera todos os numeros pares ate o valor especificado pela entrada

int gerar_par (int n){
 return (2 * n);
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);




int n_max;
    printf("Escreva até que valor será pego os numeros pares: ");
    scanf("%d", &n_max);
    if (n_max < 1000)
    {  
    for (size_t i = 0; i < n_max; i++)
    {
    printf("Este é o %d° numero par: %d\n",  i + 1,gerar_par(i));
    }}else{
        printf("Este número é muito grande");
    }


SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}

