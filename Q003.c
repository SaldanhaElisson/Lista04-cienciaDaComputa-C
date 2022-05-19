#include <stdio.h>

int main(){
    int n1, menorValor = 0;
    int *n1Ptr = &n1;
    int *menorValorPtr = &n1;

    *n1Ptr = 0;
   
    puts("Verificando qual número é maior");
    puts("Para sair do programa digite 0 ou algum numero < 0");
    puts(" ");

    // OBS: não poss declara como menorValor = 0, pois nesse caso o menor valor sempre seria zero
    // preciso declara menorValor, pois se eu não declarar ele vai pegar um número desconhecido que pode dá bug
    // para isso declarei o menorValorPtr como ponteiro de n1, pois estarão com o mesmo mesmo valor
    // quando ele entrar irá verificar se os valores são iguais ou menos, se for a variavel do menorValor vai receber o valor do ponteiro de n1
    // se ponteiro de n1 e o ponteiro de menor valor são iguais, vai mudar o ponteiro do menorValor para varia menorValor
    // fazendo assim com que tenha controle do valor da variavel menorValor
    do
    {
        puts("Digite um numero");
        scanf("%d", n1Ptr);
      
        // verificando se é o menor numero digitado
        if ( *n1Ptr <= *menorValorPtr){
            menorValor = *n1Ptr;
        }

        printf("O menor numero digitado até agora é : %d \n", *menorValorPtr);

        if(n1Ptr == menorValorPtr){
            menorValorPtr = &menorValor;
        }
         
    } while (*n1Ptr > 0);
    
    
    return 0;
}