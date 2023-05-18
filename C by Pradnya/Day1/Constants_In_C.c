#include<stdio.h>

//SYMBOLIC CONSTANS/ MACROS

#define LENGTH  25
#define ARG "ABHISHEK RAJESH GADE"


/*ENUMS ARE USED TO DEFINE THE CONSTANT,HERE WE CREATED ENUM ITS USER DEFINED TYPE WHOES NAME IS DAY(OPTIONAL),
  INSIDE IT WE DEFINED THE CONSTANT IDENTIFIER  SUNDAY 0 MONDAY 1.......ETC NOTE: WE DO NOT ASSIGN VALUE 
  SO IT BY DEFAULT START AND ASSUME THE VALUE AS 0 TO ITS 1 CONSTANT. WE CAN ONLY ASSIGN INTEGER AND CHARACTERS.*/


//UN-NAMED ENUM

enum {
	
	//MUST BE IN CAPS
	
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THRUSDAY,
	FRIDAY,
	SATURDAY
};

//NAMED-ENUM

enum MONTHS{
	
	JANAUARY = 1,
	FEBUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

enum{
	
	ONE,
	TWO,
	THREE,
	FOUR = 4,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum BOOLEAN{
	
	TRUE = 1,
	FALSE = 0
};

int main (void)
{
	//Local Constant Declaration
	
	const double abhi_Epsilion = 0.0000012;
	
	//code
	
	printf("\n\n");
	printf("The value of local-constant Epsilion is = %lf\n\n", abhi_Epsilion);

	printf("SUNDAY is day number = %d\n", SUNDAY);
	printf("MONDAY is day number = %d\n", MONDAY );
	printf("TUESDAY is day number = %d\n", TUESDAY );
	printf("WEDNESDAY is day number = %d\n", WEDNESDAY );
	printf("THRUSDAY is day number = %d\n", THRUSDAY );
	printf("FRIDAY is day number = %d\n", FRIDAY);
	printf("SATURDAY is day number = %d\n\n", SATURDAY);

	printf("One is enum no = %d\n", ONE);
	printf("TWO is enum no = %d\n", TWO);
	printf("THREE is enum no = %d\n", THREE);
	printf("FOUR is enum no = %d\n", FOUR);
	printf("FIVE is enum no = %d\n", FIVE);
	printf("SIX is enum no = %d\n", SIX);
	printf("SEVEN is enum no = %d\n", SEVEN);
	printf("EIGHT is enum no = %d\n", EIGHT);
	printf("NINE is enum no = %d\n", NINE);
	printf("TEN is enum no = %d\n\n", TEN);

	printf("Value of JANAUARY = %d\n", JANAUARY);
	printf("Value of FEBUARY = %d\n", FEBUARY);
	printf("Value of MARCH = %d\n", MARCH);
	printf("Value of APRIL = %d\n", APRIL);
	printf("Value of MAY = %d\n", MAY);
	printf("Value of JUNE = %d\n", JUNE);
	printf("Value of JULY = %d\n", JULY);
	printf("Value of AUGUST = %d\n", AUGUST);
	printf("Value of SEPTEMBER = %d\n", SEPTEMBER);
	printf("Value of OCTOBER = %d\n", OCTOBER);
	printf("Value of NOVEMBER = %d\n", NOVEMBER);
	printf("Value of DECEMBER = %d\n\n", DECEMBER);
	
	printf("Value of TRUE is = %d\n", TRUE);
	printf("Value of FALSE is = %d\n\n", FALSE);
	
	printf("Value of my LENGTH macro = %d\n", LENGTH);
	printf("Area of reactangle is = %d squarecm\n\n",(LENGTH*15*10));
	
	printf("Value of ARG is = %s\n", ARG);
	
	return(0);
}