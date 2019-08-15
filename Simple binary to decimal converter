#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//conversion of binary to decimal
int main(int argc, char *argv[])
{
	//first step is to count the amount of binary bits
	int count=0,i,sum=0,bits;
	char*b;
	b = argv[1]; // b is pointing to the first bit of the binary bits

	printf("value of b is :%s \n",b);
	//for string termination, it is termianted by '\0'
	while ( b[count]!='\0')
	{
		++count;
	}
	printf("There are %d bits in %s\n", count, b);
	//now we know the amount of bits, we can use for loop to set the count as the limit

	for(i=0; i<count; ++i)
	{
		//printf("The [%d]bits is %c\n",i ,b[i] );
		bits = b[i]- '0'; //conversion of string to integer

		sum+= (pow(2,i))* bits;//formula to convert binary to decimal
		printf("the [%d]'s sum is %d\n",i,sum);
			
	}
	printf("The string %s converted to decimal is %d", b,sum);
  
	return 0;

}
