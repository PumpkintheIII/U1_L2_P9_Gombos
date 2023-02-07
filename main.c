/*
  UB C Programming Unit 1 Lesson 2 Program 9
  Ticket Calculator
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  int adultNum, childNum; //initialize variable as integer
  float adultPrice, childPrice; //initialize variable as float
  float totalCost; //initialize variable as float

  adultPrice = 10.5; //set to price of adult ticket
  childPrice = 8; //set to price of child ticket

  printf("This program allows you to enter the number of tickets you would like to buy and it will tell you the total cost. The price of tickets are:\n\t- Child: $8.00\n\t- Adult: $10.50\nThe program will give you two prompts to enter tickets. Please enter the number of tickets you want in whole numbers:\n\t- Child Tickets: Number of Child Tickets\n\t- Adult Tickets: Number of Adult Tickets\n"); //instructions
  
  printf("Child Tickets: "); //ask for number of child tickets
  scanf("%d", &childNum); //accepts input and formats as integer
  printf("Adult Tickets: "); //ask for number of adult tickets
  scanf("%d", &adultNum); //accepts input and formats as integer

  totalCost = childNum * childPrice; //find cost of child tickets
  totalCost = totalCost + (adultNum * adultPrice); //cost of adult

  printf("Total cost: $%0.2f", totalCost); //print total cost
  
  return 0;
}