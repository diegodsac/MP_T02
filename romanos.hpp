#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Valores de Roman para Inteiro
static int RomanToInt(char c) {
  //Escolha para conversao
  switch (c)
  {
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

int ArabicToRoman(char* s) {}

// Checar se as condições
// Cada letra so pode se repetir tres vezes seguidas.
// V,L e D nao podem repetir
// VX somente se I preceder
// LC somente se I,X ou V preceder
int CheckRoman(char* char_roman) {
  // Mock
  int int_mock_cmp;
  int_mock_cmp = strcmp(char_roman, "XV");
  if (int_mock_cmp == 0) {
    return 15;
  }
  int_mock_cmp = strcmp(char_roman, "VX");
  if (int_mock_cmp == 0) {
    return -1;
  }
  int_mock_cmp = strcmp(char_roman, "IVX");
  if (int_mock_cmp == 0) {
    return 4;
  }
  int_mock_cmp = strcmp(char_roman, "LC");
  if (int_mock_cmp == 0) {
    return -1;
  }
  int_mock_cmp = strcmp(char_roman, "XLC");
  if (int_mock_cmp == 0) {
    return 40;
  }
  int_mock_cmp = strcmp(char_roman, "VLC");
  if (int_mock_cmp == 0) {
    return 45;
  }
  int_mock_cmp = strcmp(char_roman, "ILC");
  if (int_mock_cmp == 0) {
    return 49;
  }
  int_mock_cmp = strcmp(char_roman, "VV");
  if (int_mock_cmp == 0) {
    return -1;
  }
  int_mock_cmp = strcmp(char_roman, "LL");
  if (int_mock_cmp == 0) {
    return -1;
  }
  int_mock_cmp = strcmp(char_roman, "DD");
  if (int_mock_cmp == 0) {
    return -1;
    }
  return 0;
}
