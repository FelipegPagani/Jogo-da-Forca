#include "funcoes.h"
#include "cabecalho.h"

void cabecalho(){
    char nome[20];
    printf("Olá, nos informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';
    printf(" ___\n");
    printf("|   |          _________________________\n");
    printf("|   O          |                       |\n");
    printf("|  /|\\         |JOGO DA FORCA DO PAGANI|\n");
    printf("|  / \\         |_______________________|\n");
    printf("|\n");
    printf("|_\n");
        printf("Bem vindo, %s!\n", nome);
        printf("O jogo vai funcionar da seguinte maneira:\n");
        printf("Serão 10 palavras relacionadas a coisas que o Pagani gosta, cabe a você desvendar elas!\n");
        printf("    * 6 chances por rodada;\n");
        printf("    * A cada erro, uma parte do corpo vai pra forca;\n");
        printf("    * A cada rodada você tem chance de chute, se errar, perdeu tudo;\n");
        printf("Enfim. ");
    }
    
    void ganhou(){
    printf(" ___\n");
    printf("|   |");         printf("     ====================================\n");
    printf("|   ");          printf("      |                                  |\n");
    printf("|  ");           printf("       |     VOCÊ GANHOU!!! PARABÉNS      |\n");  
    printf("|    \\O/");     printf("  |                                  |\n");
    printf("|     |");       printf("   ====================================\n");
    printf("|_   / \\");
    }
    
    void limparTela(){
        printf("\033[2J\033[H");
    }
    
    void erroForca6(){
        printf(" ___\n");
        printf("|   | \n");
        printf("|   O \n");
        printf("|  /|\\\n");
        printf("|  / \\\n");
        printf("|\n");
        printf("|_\n");
    }
    
    int mostrarForca(int erros){
        if(erros == 0){
            printf("\nRestam 6 tentativas!\n");    
            printf(" ___\n");
            printf("|   |\n");
            printf("|   \n");
            printf("|   \n");  
            printf("| \n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 1){
            printf("\nRestam 5 tentativas!\n"); 
            printf(" ___\n");
            printf("|   |\n");
            printf("|   o\n");
            printf("|   \n");  
            printf("| \n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 2){
            printf("\nRestam 4 tentativas!\n");    
            printf(" ___\n");
            printf("|   |\n");
            printf("|   o\n");
            printf("|   |\n");  
            printf("| \n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 3){
            printf("\nRestam 3 tentativas!\n");    
            printf(" ___\n");
            printf("|   |\n");
            printf("|   o\n");
            printf("|   |\\\n");  
            printf("| \n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 4){
            printf("\nRestam 2 tentativas!\n");    
            printf(" ___\n");
            printf("|   |\n");
            printf("|   o\n");
            printf("|  /|\\\n");  
            printf("| \n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 5){
            printf("\nResta 1 tentativa!\n");    
            printf(" ___\n");
            printf("|   |\n");
            printf("|   o\n");
            printf("|  /|\\\n");  
            printf("|  /\n");
            printf("|\n");
            printf("|_\n");
        }
        if(erros == 6){ 
            limparTela();
            erroForca6();
            printf("Fim de jogo. Mais sorte na próxima!");
            return 0;
        }
    }