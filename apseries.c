#include <stdio.h>// for printf function

//find the sum of a Arithmetic Progression

int main() 
{
	int x,y,z,i,value_nth, sum=0;
	printf(" Please enter the starting number of the A.P Series: ");
	scanf("%d",&x);
	printf(" Please enter the items for the A.P Series: ");
	scanf("%d",&y);
	printf(" Please enter the common difference for A.P series: ");
	scanf("%d",&z);

	// formula for AP, nth term: a + (n - 1) d where a is the first term, 
	//n is the number of terms and d is the common difference

	//x= x+ ((y-1)*z);// nth term
	for(i=y;i>0;--i)
	{
		value_nth=x+ ((i-1)*z);
		//printf("x value is %d\n",value_nth);
		sum=sum+value_nth;
	}
	printf("sum is %d\n",sum);
	return 0;
}
