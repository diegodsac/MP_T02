#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Valores de Roman para Inteiro
static int RomanToInt(char c) {
  // Escolha para conversao
  switch (c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    default:
      return 0;
  }
  return -1;
}

// Funcao para converter a string
int ArabicToRoman(char* s) {
  int i, int_num = RomanToInt(s[0]);
  // For para separar e escolher o caracter
  for (i = 1; s[i] != '\0'; i++) {
    int prev_num = RomanToInt(s[i - 1]);
    int cur_num = RomanToInt(s[i]);
    // Caso o caracter for anterior subtrai e caso posterior coma
    if (prev_num < cur_num) {
      int_num = int_num - prev_num + (cur_num - prev_num);
    } else {
      int_num += cur_num;
    }
  }
  return int_num;
}

// Checar se as condições
// Cada letra so pode se repetir tres vezes seguidas.
// V,L e D nao podem repetir
// VX somente se I preceder
// LC somente se I,X ou V preceder
int CheckRoman(char* char_roman) {
  int i, int_roman;
  i = 0;
  while (char_roman[i] != '\0') {
    // printf("%c\n", char_roman[i]);
    // Teste para verificar se V,L e D se repetem
    if ((char_roman[i] == 'V') || (char_roman[i] == 'L') || (char_roman[i] == 'D')) {
      // printf("TESTE 1  %c\n", char_roman[i]);
      // Verificacao se não é o ultimo item e se o proximo é igual ao mesmo.
      if ((char_roman[i + 1] != '\0') && (char_roman[i] == char_roman[i + 1])) {
        // printf("\nRoman to integer: -1");
        return -1;
      }
    }
    // VX somente estara correto se I preceder
    if (char_roman[i] == 'V') {
      // Verificar se o antecessor é V e se existe outro caracter anterior ao V
      if (char_roman[i + 1] == 'X') {
        // Caso o anterior do V não seja I
        if (char_roman[i - 1] != 'I') {
          // printf("\nRoman to integer: -1");
          return -1;
        }
      }
    }
    // LC somente se X,V ou I preceder
    if (char_roman[i] == 'L') {
      // Verificar se o antecessor é C e se existe outro caracter anterior ao C
      if (char_roman[i + 1] == 'C') {
        // Caso o anterior do L não seja X,V ou I
        if ((char_roman[i - 1] != 'V') && (char_roman[i - 1] != 'X') && (char_roman[i - 1] != 'I')) {
          // printf("\nRoman to integer: -1");
          return -1;
        }
      }
    }
    // Teste para verificar se cada letra se repete no maximo tres vezes seguidas.
    // Se o quarto valor é o mesmo
    if ((char_roman[i] == char_roman[i + 1]) && (char_roman[i + 3] != '\0')) {
      // Se o segundo valor e o terceiro sao iguais.
      if ((char_roman[i] == char_roman[i + 2]) && (char_roman[i] == char_roman[i + 3])) {
        // printf("\nRoman to integer: -1");
        return -1;
      }
    }
    i++;
  }
  int_roman = ArabicToRoman(char_roman);
  // printf("\nRoman to integer: %d", int_roman);
  return int_roman;
}
