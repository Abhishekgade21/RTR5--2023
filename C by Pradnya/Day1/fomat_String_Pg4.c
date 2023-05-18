/* 
	Name:Abhishek Rajesh Gade
	Date:12/05/2023  
	
	Code: To study about format strings
	
*/


#include<stdio.h>

int main(void){

	//code
	
	printf("\n\n");
	printf("*********************************************************************************************************");
	
	printf("\n\n");
	
	printf("Hello World!!!\n\n");
	
	int abhi_a = 13;
	
	printf("Integer Decimal value of 'abhi_a' is = %d\n", abhi_a);
	
	printf("Integer Octal value of 'abhi_a' is = %o\n", abhi_a);
	
	printf("Integer Hexa-Decimal value of 'abhi_a' is = %x\n", abhi_a);
	
	char ch ='A';
	
	printf("character ch = %c\n", ch);
	
	char str[] = "RTR2023-102-Abhishek Rajesh Gade";
	printf("String str = %s\n\n",str);

	
	long abhi_num = 30125546L;
	printf("long integer = %ld\n\n",abhi_num);
	
	
	unsigned int abhi_b = 6;
	printf("Unsigned integer 'b' = %u\n\n", abhi_b);
	
	
	float abhi_fnum = 3012.1522f;
	
	printf("Floatin point number with Just  %%f 'abhi_fnum' = %f\n", abhi_fnum);
	printf("Floatin point number with Just  %%4.2f 'abhi_fnum' = %4.2f\n", abhi_fnum);
	printf("Floatin point number with Just  %%6.5f 'abhi_fnum' = %6.5f\n\n", abhi_fnum);
	
	
	double abhi_dpi = 3.1415926145686316665436;
	
	printf("Double Precison Floating point  number without exponentional = %g\n", abhi_dpi);
	
	printf("Double Precison Floating point  number with exponentional (Lowercase) = %e\n", abhi_dpi);

	printf("Double Precison Floating point  number with exponentional (Upper case) = %E\n\n", abhi_dpi);

	printf("Double Precison Floating point in Hexa-Decimal value in lowercase = %a\n", abhi_dpi);

	printf("Double Precison Floating point in Hexa-Decimal value in Upperrcase = %A\n\n", abhi_dpi);
	
	
	printf("*************************************************************************************************************\n");
	printf("\n\n");
	return(0);
	
}

	
	
	
	
	