#include<stdio.h>
main()
{
	printf("Choose an item:\n1.Food item- Pizza\nPrice- Rs 239\n2.Food item- Burger\nPrice-Rs 129\n3.Food item- Pasta\nPrice-Rs 179\n4.French Fries\nPrice-Rs 99\n5.Fooditem- Sandwich\nPrice-Rs 149");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: 
	 	printf("\n1.Food item- Pizza\nPrice- Rs 239");
	 	break;
	case 2:
	 	printf("\n2.Food item- Burger\nPrice-Rs 129");
	 	break;
	case 3:
	 	printf("\n3.Food item- Pasta\nPrice-Rs 179");
	 	break;
	case 4:
		printf("\n4.French Fries\nPrice-Rs 99");
		break;
	case 5:
		printf("\n5.Fooditem- Sandwich\nPrice-Rs 149");
		break;
	default: printf("Invalid order");
	}
return 0;		
}
