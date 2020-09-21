
main()
{
	int a=5;
	int *p0=&a;
	int **p1=&p0;
	int ***p2=&p1;

	clrscr();
	printf("\n%d ",*p0);
	printf("\n%d ",**p1);
	printf("\n%d ",***p2);
	getch();
}















