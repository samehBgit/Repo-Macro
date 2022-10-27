/**
  ****************************************************************************
  * @file    main.c
  * @author  Sameh belaid
  * @brief   Macros 
  * @version V1.0.0
  * @date    23-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1 
//#define OTHERS
#define NOINTEL 0
#define a 1
#define b 2
// Define an addition equation a+b=3
#define __ADD(x,y) (INTEL)?(x+y):(x*y)
//Find the minimum value that is a = 1
#define __MIN(x,y) (INTEL)?((x<y)? x: y):((x>y)? x: y)
//Define a multiplicatin equation a*b=2
#define __MUL(x,y) (NOINTEL)?(x+y):(x*y)
//Find the maximum value that is b= 2
#define __MAX(x,y) (NOINTEL)?((x<y)? x: y):((x>y)? x: y)

/* Private functions ---------------------------------------------------------*/

int Func_Som(int A,int B){
  return(A+B);
}

int Func_Som2(void){
  return(a+b);
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ 
  // call the macros functions
  int som_macro = __ADD(a,b);
  int callmax_min = __MIN(a,b);
  int mul_macro = __MUL(a,b);
  int callmax_max = __MAX(a,b);
  //int som_function1 = Func_Som(a,b);
  //int som_function2 = Func_Som2(); 
  while (1)
  {}
}

/**************************************END OF FILE**************************************/