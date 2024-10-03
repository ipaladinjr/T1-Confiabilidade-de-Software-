#include "unity.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestSortNormal);
  //RUN_TEST_CASE(Sort, TestSortValNegativos);
  RUN_TEST_CASE(Sort, TestSortMin);
  RUN_TEST_CASE(Sort, TestSortMax);
  RUN_TEST_CASE(Sort, TestSortMenos2Elementos);
  RUN_TEST_CASE(Sort, TestSortMais20Elementos);
  RUN_TEST_CASE(Sort, TestSortVazio);
  RUN_TEST_CASE(Sort, TestSortComChar);
  RUN_TEST_CASE(Sort, TestSortNomeErrado);
  RUN_TEST_CASE(Sort, TestSortAlgErrado);
  RUN_TEST_CASE(Sort, TestSortAlgTrocado);    
  RUN_TEST_CASE(Sort, TestSortValoresOrdenados);
  RUN_TEST_CASE(Sort, TestSortValoresIguais);
  RUN_TEST_CASE(Sort, TestSort1ValorDif);
}
