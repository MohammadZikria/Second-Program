#include<stdio.h>
int main()
{
 int choice,amount;
 int result;
 printf("Enter amount");
 scanf("%d",&amount);
 printf("1 mili second into hour");
 printf("2 hour into mili second");
 scanf("%d",&choice);
 if(choice == 1)
 {
  result = amount*0.000000028;
 }
 if(choice == 2)
 {
  result = amount/0.000000028;
 }
 printf("result = %d",&result);
 return 0;
}
