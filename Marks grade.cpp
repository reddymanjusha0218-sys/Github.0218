#include<stdio.h>
int main()
{
	int marks;
	printf("\nEnter the marks:");
	scanf("%d",&marks);
	if(marks>90 && marks<=100)
	printf("grade A");
	else if(marks>80 && marks<=89)
	printf("grade B");
	else if (marks>70 && marks<=79)
	printf("grade C");
	else if (marks>60 && marks<=69)
	printf("grade D");
	else if(marks>40 && marks<=59)
	printf("grade E");
	else
	printf("Fail grade");
	return (0);
}
