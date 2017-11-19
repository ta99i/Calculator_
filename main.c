#include<stdio.h>
#include<math.h>
void main()
{
	int t,a,k,i;
	printf("By Taki *.*\n\n");
	printf("insert your first number : ");
	scanf("%d",&t);
	printf("insert your secend number : ");
	scanf("%d",&a);
	printf("Insert your function :\n1-addition \n2-Subtract(f-s) \n3-multiplication \n4-Dividing(f/s)");
	printf("\nChose One : ");
	scanf("%d",&k);
	if(k==1)
	{
		i=t+a;
		printf("you chose addition \nand your result is : %d",i);
	}
	else if(k==2)
	{
		i=t-a;
		printf("you chose Subtract \nand your result is : %d",i);
	}
	else if(k==3)
	{
		i=t*a;
		printf("you chose multiplication \nand your result is : %d",i);
	}
		else if(k==4)
	{
		i=t/a;
		printf("you chose Dividing \nand your result is : %d",i);
	}
}
