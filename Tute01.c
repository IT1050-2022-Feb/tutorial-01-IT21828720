/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void){
	
	int n1,n2;
	float avg;
	
	printf("enter subject one mark:");
	scanf("%d",&n1);
	
	printf("enter subject two mark:");
	scanf("%d",&n2);
	
	avg=(n1+n2)/2;
	printf("avarage mark is :%.2f",avg);
	
	
	return 0;