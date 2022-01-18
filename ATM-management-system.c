#include <stdio.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h>

int amounttowithdraw , amounttodeposit ,othertransaction ;

float balance = 0; // intial balance to be zero



void transaction(){

  int choice;
  
  printf("\n\t\t\tBANK ATM MACHINE SYSTEM\t\t\n\n");

  printf("Enter any option to be served!\n\n");

  printf("1... To Withdraw\n");

  printf("2... To Deposit\n");

  printf("3... Check Balance\n");

printf("\nGive your choice : ");
  scanf("%d",  &choice);



  switch(choice){

    case 1:

    // first option should be withdraw



    printf("Please enter amount to withdraw: ");

    scanf("%d", &amounttowithdraw);

    if(amounttowithdraw > balance){

      printf("There is no insuffient balance in your account");

      // ask them for another transaction

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");

      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	// call our transaction method here

	transaction();

      }
      if(othertransaction==2)
     {
         printf("\nYour Transaction has been Ended.\n\tTHANK YOU");
     }

    } else {

      // this means account has something

      // so withdraw amount and update the balance variable

      balance = balance - amounttowithdraw;



      printf("You have withdrawn %d and your new balance is %f ", amounttowithdraw, balance);



      // request for another transaction

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      
      printf("Give your choice : ");
      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	// call our transaction method here

	transaction();

      }





    }

    break;



    case 2:

    // DEPOSIT





    printf("Please enter amount to deposit: ");

    scanf("%d", &amounttodeposit);

    // now that you have deposited something, update the balance variable



    balance = amounttodeposit + balance;



    printf("Thank you for depositing, new balance is: %f", balance);



    // request for another transaction

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");

      printf("Give your choice : ");
      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	// call our transaction method here

	transaction();

      }
     if(othertransaction==2)
     {
         printf("\nYour Transaction has been Ended.\n\tTHANK YOU");
     }


    break;



    case 3:



    // BALANCE

    printf("Your bank balance is: %f", balance);



    // request for another transaction

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");

      printf("Give your choice : ");
      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	// call our transaction method here

	transaction();

      }
     


    break;

  }

}

int main()
{
  char pin[5];
  printf("Set a PIN : ");
  int i;
  gets(pin);
  system("cls");
  char PIN[5];
    int a;
    printf("Enter your PIN number : ");
    for(a=0;a<4;a++)
    {
      PIN[a]=getch();
      printf("x");
    }
  if(strcmp(pin,PIN)==0)
  {
    transaction();
  }
  else
  {
    printf("\nYou've entered an incorrect PIN.");
  }

  return 0;
}