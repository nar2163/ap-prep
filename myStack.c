#include <stdio.h>
#include <stdlib.h>


#define MAXSIZE 100    /* max size of stack */

int currIndex = 0;     /* next free stack position */
double stack[MAXSIZE];  /* the actual stack */

void push(double val){
	
	if(currIndex < MAXSIZE){
		stack[currIndex++] = val;
	} else {
		printf("error: stackoverflow exception, can't push %g\n", val);
	}
}

double pop(void){

	if(currIndex > 0){
		return stack[--currIndex];
	} else {
		printf("error, stack underflow\n");
		return 0.0;
	}
}

int main(){

	return 0;

}

