#include<stdio.h>
int main
{
printf("Pick an item:\n1.Pasta-Rs.179\n2.Burger-Rs.129\n3.Frenchfries-Rs.99\n4.Sandwhich-Rs.148\nPizza-Rs.239")
int choice=0;
scanf("%d",&choice)
switch(choice)
{
case 1:
printf("Food item-Pasta\nPrice-Rs.179")
break;
case 2:
printf("Food item- Burger\nPrice-Rs.129")
break;
case 3:
printf("Food item- French fries\nPrice-Rs.99")
break;
case 4:
printf("Food item- Sandwhich\nPrice-Rs.148")
break;
case 5:
printf("Food item-Pizza\nPrice-Rs.249")
break;
default
printf("Invalid choice")
}
}
