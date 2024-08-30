//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

//Para entender da onde vem a conta acesse o site: http://clubes.obmep.org.br/blog/a-matematica-nos-documentos-cpf/

//Função que tira o 11° digito
int digito1Veric(int CPF){
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int aux_CPF = CPF;

//Primeiro Digito
a = 0;
while (aux_CPF > 100000000)
{
    aux_CPF -= 100000000;
    a++;
}

//Segundo Digito
b = 0;
while (aux_CPF > 10000000)
{
    aux_CPF -= 10000000;
    b++;
}

//Terceiro Digito
c = 0;
while (aux_CPF > 1000000)
{
    aux_CPF -= 1000000;
    c++;
}

//Quarto Digito
d = 0;
while (aux_CPF > 100000)
{
    aux_CPF -= 100000;
    d++;
}

//Quinto Digito
e = 0;
while (aux_CPF > 10000)
{
    aux_CPF -= 10000;
    e++;
}

//Sexto Digito
f=0;
while (aux_CPF > 1000)
{
    aux_CPF -= 1000;
    f++;
}

//Setmo Digito
g=0;
while (aux_CPF > 100)
{
    aux_CPF -= 100;
    g++;
}

//Oitavo Digito
h=0;
while (aux_CPF > 10)
{
    aux_CPF -= 10;
    h++;
}

//Nono Digito           
i=0;
while (aux_CPF > 0)
{
    aux_CPF -= 1;
    i++;
}

int AuxDigito01 = ((10 * a) + (9 * b) + (8 * c) + (7 * d) + (6 * e) + (5 * f) + (4 * g) + (3 * h) + (2 * i));
int Digito01;
    if ((AuxDigito01 % 11 == 0) || (AuxDigito01 % 11 == 1))
    {
        Digito01 = 0;
    }else{
        Digito01 = 11 - (AuxDigito01 % 11);
    }
    return Digito01;
}

//Função que tira o 12° digito
int digito2Veric(int CPF){
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int aux_CPF = CPF;

//Primeiro Digito
a = 0;
while (aux_CPF > 100000000)
{
    aux_CPF -= 100000000;
    a++;
}

//Segundo Digito
b = 0;
while (aux_CPF > 10000000)
{
    aux_CPF -= 10000000;
    b++;
}

//Terceiro Digito
c = 0;
while (aux_CPF > 1000000)
{
    aux_CPF -= 1000000;
    c++;
}

//Quarto Digito
d = 0;
while (aux_CPF > 100000)
{
    aux_CPF -= 100000;
    d++;
}

//Quinto Digito
e = 0;
while (aux_CPF > 10000)
{
    aux_CPF -= 10000;
    e++;
}

//Sexto Digito
f=0;
while (aux_CPF > 1000)
{
    aux_CPF -= 1000;
    f++;
}

//Setmo Digito
g=0;
while (aux_CPF > 100)
{
    aux_CPF -= 100;
    g++;
}

//Oitavo Digito
h=0;
while (aux_CPF > 10)
{
    aux_CPF -= 10;
    h++;
}

//Nono Digito           
i=0;
while (aux_CPF > 0)
{
    aux_CPF -= 1;
    i++;
}

int AuxDigito01 = ((10 * b) + (9 * c) + (8 * d) + (7 * e) + (6 * f) + (5 * g) + (4 * h) + (3 * i) + (2 * digito1Veric(CPF)));
int Digito01;
    if ((AuxDigito01 % 11 == 0) || (AuxDigito01 % 11 == 1))
    {
        Digito01 = 0;
    }else{
        Digito01 = 11 - (AuxDigito01 % 11);
    }
    return Digito01;
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
int CPF;

printf("\nDigite os 9 primeiros números do CPF conforme o exemplo a seguir:\nDigamos que seu CPF seja 123.456.789-12 digite-o assim 123456789\n");
printf("Insira a Seguir: ");
scanf("%d", &CPF);

printf("O 10° Digito do seu CPF é %d \n",digito1Veric(CPF));
printf("O 11° Digito do seu CPF é %d \n",digito2Veric(CPF));

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);

return 0;
}

