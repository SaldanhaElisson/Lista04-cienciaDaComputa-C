#include <stdio.h>
# include <stdlib.h>

void imprimindoString(const int, const char *);
void alocandoBytesChar(char *, int );
void concatenandoDuasString( char *, char *, int, int);


int main(){
    char *string1, *string2;
    int qtd1, qtd2, qtdTotal;
    
    // definindo o tamanho das string
    puts("Digite o tamanho da primeira string: ");
    scanf("%d", &qtd1);
    getchar();


    string1 = malloc(qtd1 * sizeof(char));
    
  
    puts("Digite o tamanho da segunda string: ");
    scanf("%d", &qtd2);

    qtdTotal = qtd1 + qtd2;
    string1 = malloc(qtdTotal* sizeof(char));
    string2 = malloc(qtd2 * sizeof(char));



    // capturando a 1° string
    puts("Digite primeira string");
    getchar();
    scanf("%[^\n]s", string1);

    // capturando a 2° string
    puts("Digite a segunda string: ");
    getchar();
    scanf("%[^\n]s", string2);

    // concatenando
    concatenandoDuasString(string1, string2, qtd1, qtd2 );

    imprimindoString(14, string1);

    return 0;
}

void imprimindoString(const int qtd, const char *string){
     for(int i = 0; i < qtd ; i++){
        printf("%c", *(string + i));
    }
    puts(" ");
}

void concatenandoDuasString(char *string1, char *string2, int qtd1, int qtd2){
    int qtdTotal = qtd1 + qtd2;


    for (int i = 0; i < qtd2; i++)
    {
        *(string1 + i + qtd1) = *(string2 + i);
       
        
    }
    

}