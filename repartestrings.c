#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i,c=0;


  char texto[80];
  printf("Digite o seu nome: ");
  gets(texto);

  printf("Valor da variavel texto = %s\n", texto);


  for (i=0; texto[i]!='\0'; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
    if(texto[i]==' '){
        continue;
    }else{
        c++;
    }
  }
  printf("%d",c);
  getch();
  return 0;
}
