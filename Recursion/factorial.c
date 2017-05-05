#include<stdio.h>
//recursive factorial
int rec_fact(int n)
{

	if(n==0||n==1)
	{
	  return 1;
	}
	else{
	 return n*rec_fact(n-1);
	}	

}

/*non recursive factorial
we use for loop here*/
int non_rec_fact(int n)
{
	int i,f;
	for(i=1;i<=n;i++)
	{
	 f=f*i;
	 return f;
	}
}

//main function
int main()
{
	int n,f;//variables
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	//function calling
	f=rec_fact(n);
	printf("Recursive Factorial:%d\n",f);

	f=non_rec_fact(n);
	printf("Non-Recursive Factorial:%d\n",f);

	return 0;
}
