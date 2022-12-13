#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int end();

int (*operands[5])(int, int) = {add, subtract, multiply, divide, end};

int main (void)
{
  int operand1;
  int operand2;
  int operation;

	/* IMPLEMENT ME: Insert your algorithm here */
  while(1){
    printf("Operand 'a': ");
    scanf("%d", &operand1);
      
    printf("Operand 'b': ");
    scanf("%d", &operand2);
    
    printf("Specifing the operation to complete: \n'0'-add\n'1'-subtract:\n'2'-multiply\n'3'-divide\n'4'-exit program\n");
    scanf("%d", &operation);
    
    printf("Result = %d\n", (*operands[operation]) (operand1,operand2));
      
  }
	// return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int multiply(int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int subtract(int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int divide(int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

int end(){
  printf ("exitingnow\n");
  exit(0);
}
