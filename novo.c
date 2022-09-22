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
---------------------------------------------------------
  /*2*/
    
    #include <stdio.h>

int main()
{
    float temperatura,Celsius,Kelvin,calculo;
    printf("digite a temperatura que voce deseja: ");
    scanf("%f",&temperatura);
    
    Celsius=((temperatura-32)*5)/9;
    Kelvin=  273.15 + Celsius;
    printf("Fahrenheit %.3f,Celsius %.2f,Kelvin %.3f",temperatura,Celsius,Kelvin);

}
-----------------------------------------------------------
    /*3*/
    #include <stdio.h>

int main()
{
    int num;
    printf("digite um numero decimal: ");
    scanf("%d",&num);
    
    
    printf("octal: %o\nhexadecimal: %X",num,num);

    return 0;
}
-------------------------------------------------------------------
    /*4*/
    
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("digie dois valores: ");
    scanf("%d %d",&num1,&num2);
    
    if (num1 < num2){
        for(int i = num1; i<num2;i++){
            printf("%d - ",i);
        }
        printf("%d",num2);
    }else if(num1 > num2) {
        for(int i = num1; i>num2;i--){
            printf("%d - ",i);
        }
        printf("%d",num2);
    }else{
        printf("valores iguais");
    }

    return 0;
}
-------------------------------------------------------
/*5*/

#include <stdio.h>

int main()
{
    for(int i = 0; i <128;i++){
        printf("código decimal %d| código hexa %x| caractere %c\n",i,i,i);
    }
}
