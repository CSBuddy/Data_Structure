#include<stdio.h>
//Defining gcd function
int gcd(int x , int y)
{
	if(y==0)
	{	   
	   return x;
	}
	else
	{
	   gcd(y,x%y);
	}
}//gcd function ends here

int main(){
	int x,y,g;
	printf("Enter X & Y\n");
	scanf("%d%d", &x, &y);
//Function calling
	g=gcd(x,y);
//If g is negative we will convert it into positive	
	if(g<0)
	{
	  g*=-1;
	}
//This is the output of gcd of two numbers
	printf("gcd(%d,%d)=%d\n",x,y,g);
	return 0;
}//main ends here

