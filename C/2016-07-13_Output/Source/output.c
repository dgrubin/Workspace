/*************************HEADER****************************************
*
*	Author:		DGRUBIN
*	Date:		2016-07-13
*	GIT:		GITHUB.COM/DGRUBIN	
*
*	Project:	Output
*	File:		output.c
*
***********************************************************************/

/***********************************************************************
*	INCLUDE FILES
***********************************************************************/
#include <stdio.h>

int output(int a, int b);

/*************************FUNCTION**************************************
*
*	Name:		main
*	Function:	calls the output function
*
*	Parameters:	void
*	Return:		void
*
***********************************************************************/
int main(void){
	int a = 42;
	int b = 12;
	output(a, b);
	
	return(1);
}

/*************************FUNCTION**************************************
*
*	Name:		output
*	Function:	puts some nice little things out
*
*	Parameters:	int a, int b
*	Return:		void
*
***********************************************************************/
output(a, b){
	int plus = a + b;
	int minus = a - b;
	int mul = a*b;
	int div = a/b;
	
	printf("%i  +  %i  = %i \n", a, b, plus);
	printf("%i  -  %i  = %i \n", a, b, minus);
	printf("%i  *  %i  = %i \n", a, b, mul);
	printf("%i  /  %i  = %i \n", a, b, div);
	
	return(1);
}
	
