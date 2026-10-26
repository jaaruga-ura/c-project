
#include<stdio.h>
int main()
{
int pin=800808;
int enterpin,choice,deposit,withdraw;
int balance=10000;
printf("enterpin:");
scanf("%d",&enterpin);
if(enterpin==pin)
{
  printf("correct pin");

  printf("1.Balance Amount:\n");
  printf("2.Deposit Amount:\n");
  printf("3.Withdraw Amount:\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
switch(choice)
{
case 1:
  printf("Your balance: %d",balance);
  printf("Thank you for using atm service\n");
  break;
case 2:
  printf("Enter deposit amount:");
  scanf("%d",&deposit);
  balance=balance+deposit;
  printf("Remaining balance: %d",balance);
  printf("Thank you for using atm service\n");
  break;
case 3:
  printf("Enter withdraw amount:");
  scanf("%d",&withdraw);
  printf("Balance=%d\n",balance);
  if(withdraw<=balance)
{
  balance=balance-withdraw;
  printf("Remaining balance: %d",balance);
}
else
{
printf("Insufficient balance");
}
printf("Thank you for using atm service\n");
break;
default:
   printf("Invalid choice");
}
}
else
{
   printf("Invalid pin");
}
return 0;
}



