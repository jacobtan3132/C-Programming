#include <stdio.h>
//find frequency of each characters in a string
//for example in aaaabbc; a should have count of 4, 
//b should have 2 and c should have 1
int main()
{
	char x[255]; int y[255];
	int count=0,i,j,m,max,frequency=0;

	printf("Please input a string:");
	gets(x);
	printf("You have entered:%s\n",x);

	//we should get the amount of characters first

	while( x[count]!='\0')
	{
		++count;
	}

	printf("The amount of characters inside the string %s is %d\n", x,count);
	//next we should iterate through the strings to find for any repeating characters
	

	for(i=0;i<count;++i)
		{
			frequency=0;
			
				for(j=i;j<count;++j)
				{
					if (x[i]==x[j])
					{
						++frequency;
						//printf("The frequency for %c is %d\n",x[i],frequency);
					}	
				}
				//printf("The frequency for %c is %d\n",x[i],frequency);
				//storing frequency in array y
				
					y[m]= frequency;
					
					++m;
					//printf("frequency is %d\n", y[m]);
					
		}

		max=y[0];

		for(j=0;j<count;++j)
		{
			if(max<y[j])
			{
				max=y[j];
				
				printf("Character %c ",x[j]);	
			}	
				
		}
		printf("occurs the most in string %s, occuring %d times\n",x,max);
		
	
	return 0;
}

