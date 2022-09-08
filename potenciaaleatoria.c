#include <math.h>
#include <stdio.h>

int main(){
    int base,espo,resu;
    printf("Digite a base que voce quer: ");
    scanf("%d",&base);

    printf("Digite a espoente que voce quer: ");
    scanf("%d",&espo);

    resu = pow(base,espo);
    printf("O resultado do calculo %d",resu);
}

