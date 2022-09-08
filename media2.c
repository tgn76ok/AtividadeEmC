#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int main(){

float nota1,nota2,media;
int j=0;
char conti;
    while(1){
        printf("digite a primeira nota do aluno: ");
        scanf("%f",&nota1);

        printf("digite a segunda nota do aluno: ");
        scanf("%f",&nota2);

        media = (nota1+nota2)/2;
        printf("A media das notas do aluno %d e %.2f",j,media);
        j++;
        printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");

        fflush(stdin);
        printf("Quer continuar[s/n]?");
        scanf("%c",&conti);

        if(conti == 'n'){
            break;
        }
    }
}
