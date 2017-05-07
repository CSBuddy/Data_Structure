#include<stdio.h>
/*Function declaration for bubble sort
Complexity of bubble sort is O(n^2)*/
void bubble(int *a, int n)
{
int temp, k , j;
	for(k=1;k<=n-1;k++)//used for pass
	    {
	    for(j=0;j<=n-k-1;j++)//used for comparison
	       {
		if(a[j]>a[j+1])
		{
		  temp=a[j];
		  a[j]=a[j+1];
		  a[j+1]=temp;
		}
	       }	
	     }
}//bubble function ends here

int main()
{
	int i;
	int a[10];
//input
	printf("enter the numbers\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d",&a[i]);
	}
//function calling
	bubble(a,10);

//output
	printf("Sorting Complete\n");
	for(i=0;i<10;i++)
	{
	  printf("%d\n",a[i]);
	}
	return 0;
}//main ends here
