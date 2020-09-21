void show(int *ch)
{
int sum=0;
while(*ch != '\0')
{
sum=sum + *ch;

ch++;
}
printf("\nsum %d",sum);
}
void main()
{
 int num[5]={1,2,3,4,5};
 clrscr();
// printf("enter name");
// scanf("%s",&ch);
 show(num);

getch();
}
