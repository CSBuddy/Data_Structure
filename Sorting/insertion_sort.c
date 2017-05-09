#include<stdio.h>
//insert function
void insert(int *a, int n)
{
  int i,j,key;
  for(j=0;j<n;j++)
  {
    key=a[j];
    i=j-1;
  while(i>=0 && a[i]>key)
     {
       a[i+1]=a[i];
       i=i-1;
     }
  a[i+1]=key;
  }
}//insert function ends here

int main()
{
//variables
  int i;
  int a[10];
  
//input
  printf("Enter Numbers\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  
//function calling
  insert(a,10);
  
//output
  printf("Numbers Sorted\n");
  for(i=0;i<10;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}//main function ends here
