#include<stdio.h>
/*
this is the example of linear search
its worst case is O(n)
*/
int search(int key, int *a,int n)
	{
	int i;
	for(i=0;i<=n-1;i++)
	{
	  if(a[i]==key)
	     return i;
	}
	return -1;
}
//search function ends here
int main()
{
	int i, key;
	int a[10];//array declaration
//input
	printf("Enter numbers\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d",&a[i]);	
	}
//key	
	printf("Enter key to be search\n");
	scanf("%d",&key);
	i=search(key,a,10);
//output
	if(i==-1)
	{
	   printf("key not found\n");
	}
	else
	{
	   printf("key found at %d\n",i);
	}	
	return 0;
}//main ends here

