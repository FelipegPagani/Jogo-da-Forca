#include <stdio.h>
#include "funcoes.h"
int main()
{
	char palavras[10][TAM] = {
		"Futebol",
		"Internacional",
		"Basquete",
		"Heat",
		"Sport",
		"Mahomes",
		"Messi",
		"Ronaldo",
		"Curry",
		"Neymar"
	}, semAcerto[TAM], letra;
	int tamanho, i, flag=0, erros=6, j, indiceSorteado, usado[10] = {0,0,0,0,0,0,0,0,0,0}, chute=0, rodadas;
	cabecalho();
	if(querComecar() == 1) {
		for(rodadas=0; rodadas<10; rodadas++) {
			indiceSorteado = pegarPalavras(10, palavras, usado);
			erros=0;
            
			tamanho = strlen(palavras[indiceSorteado]);
			for (j = 0; j < tamanho; j++) {
				semAcerto[j] = '_';
			}
			semAcerto[tamanho] = '\0'; //add o final da string

			while(erros <= 6) {
				printf("\nDigite uma letra: ");
				scanf(" %c", &letra);
                limparTela();
                
				mostrarPalavras(tamanho, palavras, semAcerto, letra, indiceSorteado, &erros);
				printf("\n");
				if(mostrarForca(erros) == 0){
				    return 0;
				}

				if(strcasecmp(semAcerto, palavras[indiceSorteado]) == 0) {
					printf("\nACERTOU! Bora pra proxima!\n");
					break;
				}

				chute = chutarPalavra(palavras, indiceSorteado);

				if(chute == 1) {
					printf("\nACERTOU! Bora pra proxiima!\n");
					break;
				}
				else if(chute == 0) {
					limparTela();
					erroForca6();
					printf("A palavra não eh essa! Mais sorte na proxima.");
					return 0;
				}
				else if(chute == -2) {
					printf("Digite S ou N apenas!\n");
				}
				
			}
        		if(rodadas == 9 ){
        		    limparTela();
                    ganhou();
                }
		}
	}
	return 0;
}