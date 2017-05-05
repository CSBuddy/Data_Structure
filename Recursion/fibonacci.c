/*I used Recursion here 
you can do it with iteration also*/

#include<stdio.h>

//fibonacci function
int fibo(int n)
{
	if(n==0 || n==1)
	{
	  return n;
	}
	else
	{
	  return fibo(n-1)+fibo(n-2);
	}
}

//main function
int main()
{
	int n,f;
	printf("Enter the n: ");
	scanf("%d",&n);
	f=fibo(n);
	printf("Fibonacci:\n%d\n",f);
	return 0;
}
