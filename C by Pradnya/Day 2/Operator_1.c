/*Name:Abhishek Rajesh Gade
Date:16/05/2023
Topic: Operators In C
*/


#include<stdio.h>

int main(void){
	
	//Variable Declaration
	
	int Arg_num1;
	int Arg_num2;
	int Arg_result;
	
	//Code
	
	printf("\n\n");
	
	printf("Enter the number 1:-\n");
	scanf("%d", &Arg_num1);
	
	printf("Enter the number 2:-\n");
	scanf("%d", &Arg_num2);
	
	printf("\n\n");
	
	/* Ithe Apan 5 Airthmetic operators ( +  -  *  / % ) ch demonstration pahanr ahot 
	   ani tyancha jo kahi result ahe to apan ' = ' (assignment operator) chya sahyane 
	   Arg_result ya variable made thevnar ahe.*/
	   
	
	// ADDITION
	
	Arg_result = Arg_num1 + Arg_num2;
	
	printf("Additiom of Number: %d + Number: %d = %d\n\n", Arg_num1, Arg_num2, Arg_result);
	
	// SUBSTRACTION
	Arg_result = Arg_num1 - Arg_num2;
	
	printf("Substraction of Number: %d - Number: %d = %d\n\n", Arg_num1, Arg_num2, Arg_result);
	
	// MULTIPLICATION
	
	Arg_result = Arg_num1 * Arg_num2;
	
	printf("Multiplication of Number: %d * Number: %d = %d\n\n", Arg_num1, Arg_num2, Arg_result);
	
	// DIVISION
	
	Arg_result = Arg_num1 / Arg_num2;
	
	printf("Division of Number: %d / Number: %d gives Quotient = %d\n\n", Arg_num1, Arg_num2, Arg_result);
	
	
	
	//Modulo
	Arg_result = Arg_num1 % Arg_num2;
	
	printf("Division of Number: %d / Number: %d gives Remainder = %d\n\n", Arg_num1, Arg_num2, Arg_result);
	
	
	
	return(0);
}