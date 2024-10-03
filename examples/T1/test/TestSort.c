#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort){}

TEST_TEAR_DOWN(Sort){}

// Testa funcionamento dos sorts
TEST(Sort, TestSortNormal)
{
  int vetCounting[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetRadix[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetBubble[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetInsertion[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetSelection[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetHeap[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetMerge[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int vetQuick[10] = {29, 50, 72, 32, 46, 0, 7, 64, 81, 69};
  int resultadoEsperado[10] = {0, 7, 29, 32, 46, 50, 64, 69, 72, 81};
  int tam = 10;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}

/*
// Testa funcionamento dos sorts com valor negativo em alguns de seus elementos
TEST(Sort, TestSortValNegativos)
{
  int vetCounting[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetRadix[10] =    {29, -50, 72, -32, 46, 0, -7, 64, 81, 69}; // ERRO ACONTECE NESSA LINHA
  int vetBubble[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetInsertion[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetSelection[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetHeap[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetMerge[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int vetQuick[10] = {29, -50, 72, -32, 46, 0, -7, 64, 81, 69};
  int resultadoEsperado[10] = {-50, -32, -7, 0, 29, 46, 64, 69, 72, 81};
  int tam = 10;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}
*/

// Testa os sorts com apenas 2 elementos(valor minimo)
TEST(Sort, TestSortMin)
{
  int vetCounting[2] = {20, 11};
  int vetRadix[2] = {20, 11};
  int vetBubble[2] = {20, 11};
  int vetInsertion[2] = {20, 11};
  int vetSelection[2] = {20, 11};
  int vetHeap[2] = {20, 11};
  int vetMerge[2] = {20, 11};
  int vetQuick[2] = {20, 11};
  int resultadoEsperado[2] = {11, 20};
  int tam = 2;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}

// Testa os sorts com apenas 20 elementos(valor maximo)
TEST(Sort, TestSortMax)
{
  int vetCounting[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetRadix[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetBubble[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetInsertion[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetSelection[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetHeap[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetMerge[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetQuick[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int resultadoEsperado[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  int tam = 20;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}

// Testa os sorts com menos de 2 elemento
TEST(Sort, TestSortMenos2Elementos)
{
  int vet[1] = {10};
  int tam = 1;

  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", QUICK));
}

// Testa os sorts com mais de 20 elemento
TEST(Sort, TestSortMais20Elementos)
{
  int vet[21] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int tam = 21;

  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", QUICK));
}


// Teste o funcinamento de sort sem elementos (vazio)
TEST(Sort, TestSortVazio)
{
  int vet[] = {};
  int tam = 0;

  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On2", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"Onlogn", QUICK));
}

// Testa funcionamento se receber 2 caracteres em vez de 2 numeros em um vetor
TEST(Sort, TestSortComChar)
{
  int vetCounting[5] = {76, 'a', 12, 'z', 89};
  int vetRadix[5] = {76, 'a', 12, 'z', 89};
  int vetBubble[5] = {76, 'a', 12, 'z', 89};
  int vetInsertion[5] = {76, 'a', 12, 'z', 89};
  int vetSelection[5] = {76, 'a', 12, 'z', 89};
  int vetHeap[5] = {76, 'a', 12, 'z', 89};
  int vetMerge[5] = {76, 'a', 12, 'z', 89};
  int vetQuick[5] = {76, 'a', 12, 'z', 89};
  int tam = 5;
  int resultadoEsperado[5] = {12, 76, 89, 97, 122};


  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL(1, sort(vetCounting, tam, resultadoEsperado, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetRadix, tam, resultadoEsperado, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetBubble, tam, resultadoEsperado, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetInsertion, tam, resultadoEsperado, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetSelection, tam, resultadoEsperado, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetHeap, tam, resultadoEsperado, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetMerge, tam, resultadoEsperado, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetQuick, tam, resultadoEsperado, QUICK));
}

// Testa funcionamento com o parametro 'nome' diferente do que foi programado 
TEST(Sort, TestSortNomeErrado)
{
  int vetCounting[5] = {76, 23, 12, 66, 89};
  int vetRadix[5] = {76, 23, 12, 66, 89};
  int vetBubble[5] = {76, 23, 12, 66, 89};
  int vetInsertion[5] = {76, 23, 12, 66, 89};
  int vetSelection[5] = {76, 23, 12, 66, 89};
  int vetHeap[5] = {76, 23, 12, 66, 89};
  int vetMerge[5] = {76, 23, 12, 66, 89};
  int vetQuick[5] = {76, 23, 12, 66, 89};
  int tam = 5;


  TEST_ASSERT_EQUAL(1, sort(vetCounting, tam, (char *)"Blabla", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetRadix, tam, (char *)"Blabla", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetBubble, tam, (char *)"Blabla", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetInsertion, tam, (char *)"Blabla", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetSelection, tam, (char *)"Blabla", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetHeap, tam, (char *)"Blabla", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetMerge, tam, (char *)"Blabla", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetQuick, tam, (char *)"Blabla", QUICK));
}

// Testa funcionamento com 'Nome' correto porem o parametro passado do algoritmo nao existe
TEST(Sort, TestSortAlgErrado)
{
  int vet[3] = {2, 1, 0};
  int tam = 3;

  TEST_ASSERT_EQUAL(1, sort(vet, tam, (char *)"On", 9));
}

// Testa funcionamento se 'Nome' está certo porem o algoritmo selecionado esta vinculado a outro 'Nome'
TEST(Sort, TestSortAlgTrocado)
{
  int vetCounting[3] = {2, 1, 0};
  int vetRadix[3] = {2, 1, 0};
  int vetBubble[3] = {2, 1, 0};
  int vetInsertion[3] = {2, 1, 0};
  int vetSelection[3] = {2, 1, 0};
  int vetHeap[3] = {2, 1, 0};
  int vetMerge[3] = {2, 1, 0};
  int vetQuick[3] = {2, 1, 0};
  int tam = 3;

  TEST_ASSERT_EQUAL(1, sort(vetCounting, tam, (char *)"On", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetRadix, tam, (char *)"On", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetBubble, tam, (char *)"On2", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetInsertion, tam, (char *)"On2", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetSelection, tam, (char *)"On2", QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetHeap, tam, (char *)"Onlogn", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetMerge, tam, (char *)"Onlogn", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetQuick, tam, (char *)"Onlogn", SELECTION));
}


// Testa funcionamento do sort com dados ja ordenados
TEST(Sort, TestSortValoresOrdenados)
{
  int vetCounting[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetRadix[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetBubble[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetInsertion[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetSelection[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetHeap[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetMerge[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int vetQuick[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int resultadoEsperado[10] = {20, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int tam = 10;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}

// Testa sort com valores iguais
TEST(Sort, TestSortValoresIguais)
{
  int vetCounting[5] = {5, 5, 5, 5, 5};
  int vetRadix[5] = {5, 5, 5, 5, 5};
  int vetBubble[5] = {5, 5, 5, 5, 5};
  int vetInsertion[5] = {5, 5, 5, 5, 5};
  int vetSelection[5] = {5, 5, 5, 5, 5};
  int vetHeap[5] = {5, 5, 5, 5, 5};
  int vetMerge[5] = {5, 5, 5, 5, 5};
  int vetQuick[5] = {5, 5, 5, 5, 5};
  int resultadoEsperado[5] = {5, 5, 5, 5, 5};
  int tam = 5;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}

// Testa sort se apenas 1 valor é diferente dos demais
TEST(Sort, TestSort1ValorDif)
{
  int vetCounting[5] = {5, 5, 5, 5, 1};
  int vetRadix[5] = {5, 5, 5, 5, 1};
  int vetBubble[5] = {5, 5, 5, 5, 1};
  int vetInsertion[5] = {5, 5, 5, 5, 1};
  int vetSelection[5] = {5, 5, 5, 5, 1};
  int vetHeap[5] = {5, 5, 5, 5, 1};
  int vetMerge[5] = {5, 5, 5, 5, 1};
  int vetQuick[5] = {5, 5, 5, 5, 1};
  int resultadoEsperado[5] = {1, 5, 5, 5, 5};
  int tam = 5;

  sort(vetCounting, tam, (char *)"On", COUNTING);
  sort(vetRadix, tam, (char *)"On", RADIX);
  sort(vetBubble, tam, (char *)"On2", BUBBLE);
  sort(vetInsertion, tam, (char *)"On2", INSERTION);
  sort(vetSelection, tam, (char *)"On2", SELECTION);
  sort(vetHeap, tam, (char *)"Onlogn", HEAP);
  sort(vetMerge, tam, (char *)"Onlogn", MERGE);
  sort(vetQuick, tam, (char *)"Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vetCounting, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetRadix, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetBubble, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetInsertion, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetSelection, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetHeap, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetMerge, resultadoEsperado, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetQuick, resultadoEsperado, tam);
}
