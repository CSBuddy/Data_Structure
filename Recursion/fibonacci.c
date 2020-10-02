/*I used Recursion here 
you can do it with iteration also*/

#include<stdio.h>

//fibonacci function
int fibo(int n)
{
	if(n==0 || n==1)     // base condition
	{
	  return n;
	}
	else
	{
	  return fibo(n-1)+fibo(n-2);  // recursive function
	}
}

int main()
{
	int n,f;
	printf("Enter the number: ");
	scanf("%d",&n);
	f=fibo(n);
	printf(" The Fibonacci Series is :\n%d\n",f);
	return 0;
}
