#include<stdio.h>
int main()
{
	int ch;
	printf("Enter Any Number (1 to 5):");
	scanf("%d",&ch);
	switch(ch)
	{
		
		case 1:
			printf("Food item - Pizza");
			printf("\nPrice - Rs 239");
			break;
		case 2:
			printf("Food item - Burger");
			printf("\nPrice - Rs 129");
			break;			
		case 3:
			printf("Food item - Pasta");
			printf("\nPrice - Rs 179");
			break;
		case 4:
			printf("Food item - French Fries");
			printf("\nPrice - Rs 99");
			break;
		case 5:
			printf("Food item - Sandwich");
			printf("\nPrice - Rs 149");
			break;
		default:
			printf("\nInvalid input.");
	}
	return 0;
}
