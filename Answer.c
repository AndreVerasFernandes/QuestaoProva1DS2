#include <stdio.h>
#include <math.h>
#define e 2.71846104
/* O critério de parada pode ser utilize a diferença entre o valor da 
exponencial “e” e o seu resultado para que o código pare quando essa 
diferença for igual a 0,1% do valor de “e” e um valor definido pelo 
usuário, com esse valor sendo o último valor de x rodado.*/

// O limite é 1+1/x elevado a x quando x tende a infinito

int main() {
float Par;
float x = 0;
int h;
float Res;
int CP;

printf("O limite é 1+1/x elevado a x quando x tende a infinito\n");
printf("Digite 1 para quando o critério de parada for quando essadiferença for igual a 0,1 porcento do valor de “e”\n ");
printf("Digite 2 para quando o critério de parada for um valor definido pelo usuário, com esse valor sendo o último valor de x rodado\n");
printf("Defina o critério de parada:\n");
scanf("%d",&CP);

switch (CP) {
case 1:
while(Res < e-(0.1*e)){
Res = pow(1+(1/x),x);
printf("O valor do limite quando x tende a %.8f, é %.8f\n", x, Res);
x++;
if(x==5)
break;
}
break;
case 2:
printf("Defina um critério de parada colocando um valor sendo esse o ultimo valor de x rodado:\n ");
scanf("%f", &Par);
while(x < Par){
Res = pow(1+(1/x),x);
x++;
}
break;
default:
printf("Erro, tente novamente\n");
break;
}
printf("O valor do limite quando x tende a %.8f, é %.8f\n", x, Res);
return 0;
}
