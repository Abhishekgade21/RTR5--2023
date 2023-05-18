#include<stdio.h>
#include<conio.h>
int main() {
	char name[] = "";
	int money[] = { 1000,2000,3000,4000,5000,6000,7000,8000,9000,1000 };
	float amount = 0.0;


	printf("Enter your name:\n");
	scanf(" %s", &name);

	int i, choice, no_Que = 1;
	printf("Do yo want to play KBC: 1:Yes 0:No \n");
	scanf(" %d", &choice);

	if (choice == 1) {

		printf("**************************************************************Welcome-Lets Play Kon banega Corepati************************************************************************\n");


		for (i = 0; i < no_Que; i++) {

			char choice = '0';

			switch (i + 1) {

			case 1:
				print("%d que for 1000 rupees here on your screen.\n", i);
				printf("Que:1- Who is Prime mininster of India?\n");
				printf("a.Modi \t\t b. arvind \n c.shah \t\t d. rajiv\n");

				printf("Please select your option\n");
				scanf("%c", &choice);

				if (choice == 'a' || choice == 'A')
				{
					printf("Congratulation Right option you won 1000 rs \n");
					printf("Explanation: He was elected as indias prime minister in 2014 election.\n");
					amount = amount + money[i];
				}

				else
				{
					printf("Wrong option selected. Thankyou for particpating.\n");
					break;
				}

			}
		}
		
	}
	return(0);
}