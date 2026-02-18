#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <strings.h>
#include "cabecalho.h"

#define TAM 15
    
    int querComecar();
    int pegarPalavras(int linhas, char palavras[][TAM], int usado[]);
    void embaralharPalavras(int linhas, char palavras[][TAM]);
    void mostrarPalavras(int tamanho, char palavras[][TAM], char semAcerto[TAM], char letra, int i, int *erros);
    int chutarPalavra(char palavras[][TAM], int i);
#endif