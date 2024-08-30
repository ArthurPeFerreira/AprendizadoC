#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

long int DiaParaAno(long int Dias){
    long int Anos;
    Anos = Dias/365;
    return Anos;
}

long int DiaParaMes(long int Dias){
    long int Mes;
    if(Dias >= 365){
    Mes = (Dias/30) - (DiaParaAno(Dias) * 12);
    }else{
    Mes = (Dias/30);
    }
    return Mes;
}

long int DiaRestante(long int Dias){
    long int DiasRest;
    DiasRest = Dias - (DiaParaAno(Dias) * 365 + DiaParaMes(Dias) * 30);
    return DiasRest;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    long int Dias;
    printf("Digite a sua idade em dias: ");
    scanf("%ld",&Dias);
    
    printf("Você tem %ld ano(s), %ld mes(es), %ld dia(s).",DiaParaAno(Dias),DiaParaMes(Dias),DiaRestante(Dias));

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}