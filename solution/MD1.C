#include<stdio.h>
#include<conio.h>
void addition();
void subtraction(int,int);
int division();
int modulus(int,int);
int menu();

void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				addition();
				break;
			case 2:
				printf("Enter two value:");
				scanf("%d%d",&x,&y);
				subtraction(x,y);
				break;
			case 3:
				div=division();
				printf("Division is %d",div);
				break;
			case 4:
				printf("Enter two value:");
				scanf("%d%d",&x,&y);
				div=modulus(x,y);
				printf("Modulus of %d & %d is %d",x,y,div);
				break;
			case 5:
				exit(0);

			default:
				printf("SORRY INVALID CHOICE\nPLEASE CHOOSE BETWEEN 1 TO 5");
		}
		printf("\n\n\t Do you want to continue?(Yes=Y/y||No=N/n):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}
int menu()
{
	int choice;
	printf("\n MENU ");
	printf("\n-------------------------");
	printf("\n 1.addition\n 2.subtraction\n 3.division\n 4.modulus\n 5.exit");
	printf("\n-------------------------");
	printf("\n\t Enter your choice:");
	scanf("%d",&choice);
	return(choice);
}
void addition()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("\n Addition of %d & %d is %d",x,y,x+y);
}
void subtraction(int x,int y)
{
	printf("subtraction of % d & %d is %d",x,y,x-y);
}
int division()
{
	int x,y;
	scanf("%d%d",&x,&y);
	return(x/y);
}
int modulus(int x,int y)
{
	return(x%y);
}



