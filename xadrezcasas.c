#include <stdio.h>
#include <math.h>

int main(){


    /*float somat;

    somat = (1.0*(pow(2.0,63.0)-1.0))/1.00;

    printf("a somatoria e de %f",somat);
    */

    float casas,grau=1;
    for (casas =0 ; casas<=63;casas++){
        printf("na casa %.1f temos %.2f graus no total\n",casas,grau);
        grau+=grau;

    }
}
