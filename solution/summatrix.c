/* wap a program to create to 3*3 matrix and print sum of it.
date:-18-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int i,j,m1[3][3],m2[3][3],sum[3][3];
       clrscr();
       for(i=0;i<3;i++)
       {
	    for(j=0;j<3;j++)
	    {
		printf("\n Enter the value for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
	    }
       }
       for(i=0;i<3;i++)
       {
	  for(j=0;j<3;j++)
	  {
	      printf("%d\t",m1[i][j]);
	  }
	  printf("\n");
       }
       for(i=0;i<3;i++)
       {
	  for(j=0;j<3;j++)
	  {

	      printf("\n Enter the any value for m2[%d][%d]",i,j);
	      scanf("%d",&m2[i][j]);
	  }
       }
       for(i=0;i<3;i++)
       {
	 for(j=0;j<3;j++)
	 {
	    printf("%d\t",m2[i][j]);
	 }
	 printf("\n");
       }
	for(i=0;i<3;i++)
       {
	 for(j=0;j<3;j++)
	 {
	   if(m1[i][j]==m2[i][j])
	       sum[i][j]=m1[i][j]+m2[i][j];
	 }
	 printf("\n");
       }
       printf("\n sum of two number:");
       printf("\n");
       for(i=0;i<3;i++)
       {
	 for(j=0;j<3;j++)
	 {
	    printf("%d\t",sum[i][j]);
	 }
	 printf("\n");

       }
       getch();
}



