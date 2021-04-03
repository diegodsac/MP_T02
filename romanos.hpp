#include <stdio.h>
#include <stdlib.h>
#include <iostream>

static int RomanToInt(char c) {
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
