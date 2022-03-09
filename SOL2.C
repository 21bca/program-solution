/* WAP to create to 3*3 matrics & check it is diaognal are not
Program 2 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int v[3][3],i,n,f=0;
	clrscr();
	for(i=0;i<3;i++)//for a
	{
		for(n=0;n<3;n++)
		{
			printf("\nenter value for a[%d][%d]:",i,n);
			scanf("%d",&v[i][n]);
		}
	}
	printf("\n---------------------------------\n");
	for(i=0;i<3;i++)
	{
		for(n=0;n<3;n++)
			printf("%d \t",v[i][n]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(n=0;n<3;n++)
		{
			if(i!=n&&v[i][n]!=0)
			{
				f=1;
				break;
			}
		}
	}
	if(f==1)
		printf("\n matrix is not diognal");
	else
		printf("\n matrix is diognal");
	getch();
}