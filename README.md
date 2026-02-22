# 🎮 Jogo da Forca em C

Este repositório contém o meu Trabalho Final da disciplina Fundamentos de Algoritmos e Programação, no semestre 2025/2, ministrada pelo Professor Lorenzon.

O projeto consiste no desenvolvimento de um Jogo da Forca em linguagem C, feito para rodar no console, utilizando funções, strings e modularização em arquivos .c e .h.

# 📌 Sobre o Jogo

*  O jogo funciona em várias rodadas. Em cada rodada, uma palavra é sorteada automaticamente e o jogador deve tentar adivinhar as letras.
*  As letras que ainda não foram descobertas aparecem como _;
*  A cada tentativa, o jogador informa uma letra;
*  Se a letra existir na palavra, ela é revelada;
*  Se errar, o número de erros aumenta e a forca é desenhada aos poucos;
*  Existe um limite máximo de erros;
*  O jogador pode tentar arriscar a palavra inteira, mas se errar, o jogo termina;
*  O jogo acaba quando o jogador perde por erros ou quando todas as palavras são descobertas.

# 🛠️ Como o Código Foi Feito

O código foi desenvolvido em C, usando apenas bibliotecas padrão da linguagem.

Utilizei:

*  Strings (char[]) para armazenar e manipular as palavras;
*  Funções da biblioteca <string.h>, como strlen() e strcmp();
*  Estruturas de repetição (while, for) para controlar as tentativas e rodadas;
*  Estruturas de decisão (if, else) para verificar acertos, erros e o fim do jogo.
*  O programa foi dividido em funções para deixar o código mais organizado e fácil de entender.

# 🔧 Funcionalidades do Programa

O jogo foi separado em funções, cada uma com uma responsabilidade específica, como:

*  Mostrar as boas-vindas e as regras do jogo;
*  Sortear uma palavra aleatória sem repetir palavras já usadas;
*  Mostrar a palavra com as letras descobertas e esconder as outras;
*  Desenhar a forca de acordo com a quantidade de erros;
*  Controlar as tentativas do jogador e verificar se ele venceu ou perdeu.
