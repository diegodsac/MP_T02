#include <iostream>
#include <string.h>
//include the google test dependencies
#include <gtest/gtest.h>
#include "romanos.hpp"


void ArabicToRoman(unsigned int numero, char *resultado);

TEST(ArabicToRomanTest, PositiveNos)
{
  char *romanNumber = (char *)malloc(sizeof(char) * 1024);
  int int_test;
  char str_aux[30];

  strcpy(str_aux, "XV");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(15, int_test);
  // VX somente estara correto se I preceder
  strcpy(str_aux, "VX");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(-1, int_test);
  // VX somente estara correto se I preceder
  strcpy(str_aux, "IVX");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(4, int_test);
  // LC somente se X,V ou I preceder
  strcpy(str_aux, "LC");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(-1, int_test);
  // LC somente se X
  strcpy(str_aux, "XLC");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(40, int_test);
  // LC somente se V
    strcpy(str_aux, "VLC");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(45, int_test);
  // LC somente se I
  strcpy(str_aux, "ILC");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(49, int_test);
  //Teste para verificar se V,L e D se repetem
  strcpy(str_aux, "VV");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(-1, int_test);
  //Teste para verificar se V,L e D se repetem
  strcpy(str_aux, "LL");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(-1, int_test);
  //Teste para verificar se V,L e D se repetem
  strcpy(str_aux, "DD");
  int_test = CheckRoman(str_aux);
  ASSERT_EQ(-1, int_test);


}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
