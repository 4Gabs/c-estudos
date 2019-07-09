#include <stdio.h>

int main(){

    char letra;
    int nro;
    float n;
    double d;

    printf("Digite um caractere: ");
    scanf("%c",&letra);
    printf("Caractere digitado: %c\n",letra);
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&nro);
    printf("Numero inteiro digitado: %d\n",nro);
    
    printf("Digite um float: ");
    scanf("%f",&n);
    printf("float digitado: %f\n",n);
    
    printf("Digite um double: ");
    scanf("%lf",&d);
    printf("double digitado: %lf\n",d);

    printf("Digite dois numeros: ");
    scanf("%d%f",&nro,&n);
    printf("Números: %d e %f\n",nro,n);

    return 0;

}