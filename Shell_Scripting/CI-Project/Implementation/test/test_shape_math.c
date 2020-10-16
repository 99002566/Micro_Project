#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <shape_math.h>
#include<math.h>
#define PROJECT_NAME    "Shapes"

/* Prototypes for all the test functions */
void test_area_triangle(void);
void test_peri_triangle(void);
void test_area_square(void);
void test_peri_square(void);
void test_area_rectangle(void);
void test_peri_rectangle(void);
void test_area_circle(void);
void test_peri_circle(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "triangle_area", test_area_triangle);
  CU_add_test(suite, "triangle_peri", test_peri_triangle);
  CU_add_test(suite, "square_area", test_area_square);
  CU_add_test(suite, "square_peri", test_peri_square);
  CU_add_test(suite, "rectangle_area", test_area_rectangle);
  CU_add_test(suite, "rectangle_peri", test_peri_rectangle);
  CU_add_test(suite, "circle_area", test_area_circle);
  CU_add_test(suite, "circle_peri", test_peri_circle);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */


void test_area_rectangle(void){
  CU_ASSERT(200 == rectangle_area(20,10));

  /* Dummy fail*/
  CU_ASSERT(50 == rectangle_area(8,9));
}
void test_peri_rectangle(void){
  CU_ASSERT(36 == rectangle_peri(12,6));

  /* Dummy fail*/
  CU_ASSERT(50 == rectangle_peri(18,10));
}
void test_area_square(void) {
  CU_ASSERT(25 == square_area(5));

  /* Dummy fail*/
  CU_ASSERT(50 == square_area(10));
}

void test_peri_square(void) {
  CU_ASSERT(12== square_peri(3));

  /* Dummy fail*/
  CU_ASSERT(30 == square_peri(12));
}
void test_area_circle(void){
  CU_ASSERT(314 == circle_area(10));

  /* Dummy fail*/
  CU_ASSERT(30 == circle_area(12));
}
void test_peri_circle(void){
  CU_ASSERT(62 == circle_peri(10));

  /* Dummy fail*/
  CU_ASSERT(30 == circle_peri(6));
}
void test_area_triangle(void){
  CU_ASSERT(39 == triangle_area(8, 10, 12));

  /* Dummy fail*/
  CU_ASSERT(200 == triangle_area(16, 14, 12));
}

void test_peri_triangle(void) {
  CU_ASSERT(15 == triangle_peri(4,5,6));

  /* Dummy fail*/
  CU_ASSERT(50 == triangle_peri(20, 25, 28));
}

