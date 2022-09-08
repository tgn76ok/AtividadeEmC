#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

float nota1,nota2,media;

int main(){
    for(int j=0;j<=3;j++){
        printf("digite a primeira nota do aluno: ");
        scanf("%f",&nota1);

        printf("digite a segunda nota do aluno: ");
        scanf("%f",&nota2);

        media = (nota1+nota2)/2;
        printf("A media das notas do aluno %d e %.2f",j,media);

        printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
    }
}
