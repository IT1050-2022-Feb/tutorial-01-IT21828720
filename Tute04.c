/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a,int b);
int maximum(int c,int d);
int multiply(int i,int j);

int main(void){
	
	int n01,n02;
	
	 printf("enter a value for a number 1 :");
	 scanf("%d",&n01);
	
	printf("enter a value for a number 2 :");
	scanf("%d",&n02);
	
	printf("%d ",minimum(n01,n02));
	printf("%d ",maximum(n01,n02));
	printf("%d ",multiply(n01,n02));
	
	
	return 0;
	
}int minimum(int a,int b){
	
	if(a>b){
		
		return b; 
	}else{
		
		return a;
	}
	
	
}int maximum(int c,int d){
	
	if(c>d){
		
		return c;
	}else{
		
		return d;
	}
	
	
}int multiply(int i,int j){
	
	
	return i*j;
	
	
	
}
