#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int main(){
    int rep_vezes =3;


    /*scanf("%d",rep_vezes)*/

    for (int c =0;c<=rep_vezes;c++){
        system("cls");
        printf("\n\n\n loding");
        for (int i = 0;i<=10;i++){
            printf(".");
            sleep(1);
        }
    }
}
