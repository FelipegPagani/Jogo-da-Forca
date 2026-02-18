#include <stdio.h>
#include "funcoes.h"

    int querComecar(){
    char opcao;
    int erro=0;
         printf("Vamos começar? (S/N) ");
        scanf(" %c", &opcao);
            if(opcao !='s' && opcao !='S'){
                printf("Que pena, ficamos por aqui!");
                exit(0);
            }
                limparTela();
                printf("Que bom que optou por jogar!\n");
                mostrarForca(erro);
                return 1;
    }
    
    int pegarPalavras(int linhas, char palavras[][TAM], int usado[]){
            int i;
            static int totalUsadas=0; //manter o valor quando chamado de novo
            if (totalUsadas == 10) {
                return -1; // acabou as palavras
            }
            srand(time(NULL));
            do {
                i = rand() % 10;
            } while (usado[i] == 1);
        
            usado[i] = 1;
            totalUsadas++;
        
            return i;//retrorna linha da palavra da vez
        }

    
    void mostrarPalavras(int tamanho, char palavras[][TAM], char semAcerto[TAM], char letra, int i, int *erros){
        int flag=0;
        for(int j=0; j<tamanho; j++){
                if(tolower(letra) == tolower(palavras[i][j])){
                    semAcerto[j] = palavras[i][j];
                    flag=1;
                }
            }
            if(flag == 0){
                (*erros)++;
            }
            flag=0;
            printf("Palavra: ");
            for(int k=0; k<tamanho; k++){
                printf("%c ", semAcerto[k]);
            }
        }

    int chutarPalavra(char palavras[][TAM], int i){
    char opcao, chute[TAM];

    printf("Deseja chutar? (S/N) ");
    scanf(" %c", &opcao);

    if(opcao == 's' || opcao == 'S'){
        printf("Chute: ");
        scanf("%s", chute);
        
        if(strcasecmp(chute, palavras[i]) == 0){ //função para desconsiderar maiusculas e minusculas (biblioteca strings.h)
            limparTela();
            return 1;// acertou  
        } else {
            return 0;  //errou fim de jogo
        }
    }

    if(opcao == 'n' || opcao == 'N'){
        return -1; //continua normal
    }

    printf("Opção inválida!\n");
    return -2;//segue para a proxima letra
}
