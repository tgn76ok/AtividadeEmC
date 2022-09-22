/*Faça um programa que solicite 2 números e informe: a soma dos números,
o produto doprimeiro número pelo quadrado do segundo, o quadrado do primeiro número, 
a raiz quadradada soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulodo primeio nú*mro.
*/
#include <stdio.h>
#include <math.h>
int main(){
    double valor1,valor2;
    printf("digite dois números: ");
    scanf("%lf %lf",&valor1,&valor2);
    
    printf("A soma dos numeros numeros %.3lf\n",valor1+valor2);
    
    printf("o produto doprimeiro número pelo quadrado do segundo %.3lf\n",valor1*(valor2*valor2));
    
    printf("o quadrado do primeiro número %.3lf\n",(valor1*valor1));
    
    printf("a raiz quadradada soma dos quadrados %.3lf\n",valor1+valor2);
    
    printf("o seno da diferença do primeiro número pelo segundo %.3lf",sin(valor1-valor2));
    
    printf("O módulodo primeiro número  %.3lf\n",valor1<0 ?  valor1*-1:  valor1 );
    
}
