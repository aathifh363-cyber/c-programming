#include<stdio.h>
int main()
{
  int pin=1234;
  int enteredpin;
  int choice;
  float balance=5000;
  float amount;

  printf("====WELCOME TO ATM====\n");

  printf("Enter your pin:");
  scanf("%d" ,&enteredpin);

  if (enteredpin !=pin)
  {
    printf("Ivalid PIN!\n");
    return 0;
  }
  printf("\nLogin sucessful!\n");

  do
  {
  printf("\n====ATM MENU ====\N");
  printf("1. check Blance\n");
  printf("2. Deposit money\n");
  printf("3. withdraw money\n");
  printf("4. Exit\n");

  printf("enter your choice:");
  scanf("%d",&choice);

  switch (choice)
  {
    case 1:
	 printf("your balance: RS. %.2f\n", balance);
	 break;
    case 2:
	 printf("enter deposit amount:");
	 scanf("%f",&amount);

	 if(amount> 0)
	 {
	   balance=balance+amount;
	   printf("money deposited successfully!\n");
	   printf("new balance:RS. %.2f\n",balance);
	 }
	 else
	 {
	   printf("Invalid Amount!\n");
	 }
	 break;

    case 3:
	 printf("enter withdrawal amount:");
	 scanf("%f", &amount);

	 if(amount<=0)
	 {
	  printf("Ivalid Amount");
	 }
	 else if (amount <=balance)
	 {
	   balance= balance - amount;
	   printf("please collect your cash.\n");
	   printf("Remaining balance: RS. %.2f\n",balance);
	 }
	 else
	 {
	   printf("Insufficient Balance!\n");
	 }
	 break;

       case 4:
	    printf("Thank you for using ATM!\n");
	    break;
       default:
	    printf("Invalid choice!\n");
     }
    } while(choice !=4);
    return 0;
  }
