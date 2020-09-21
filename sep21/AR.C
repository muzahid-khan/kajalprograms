//array is a collection of variable of similar data type
// syntax : datatype <arrayname>[no of elements];
//for eg int arr[5]; // this will create array of five elements
//create an integer array to store 3 no.
#include<stdio.h>
void main()
{
 char name[3][10];
 int i;

 clrscr();
for(i=0;i<3;i++)
{
 fflush(stdin);
  printf("\nenter your name");
  scanf("%s",name[i]);
  }

 //display the values from an array
clrscr();
printf("\n********************************************************");
printf ("\n ****************** Student Name **********************");
printf("\n********************************************************");
for(i=0;i<3;i++)
{
 printf("\n\t\t\t%s               ",name[i]);
 }
 printf("\n********************************************************");


 getch();
}
