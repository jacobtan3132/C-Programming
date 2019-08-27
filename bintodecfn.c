//function to calculate both bintodec and dectobin

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int bintodec( int argc, char*argv);//need declare first if you wanna put main function at the front
int dectobin( int argc, char*argv);//need declare first if you wanna put main function at the front

int main( int argc, char*argv[])
{
	
	//if want to convert binary to dec (btod 10001 etc)(btod is the argv[1] and 10001 is argv[2])
	//if want to convert dec to binary (dtob 10 etc)
	if( strcmp(argv[1],"btod")== 0) //cannot if( argv[1]=='btod') as argv[1] is a pointer only!
	{
		bintodec(argc, argv[2]);
	}
	else if (strcmp(argv[1],"dtob")==0)
	{
		dectobin(argc, argv[2]);
	}
	else
	{
		printf("you have entered an invalid option!");
		return 0;
	}
	return 0;


}


int bintodec( int argc, char*argv)
{
	//first step is to count the amount of binary bits
	int count=0,i,sum=0,bits;
	char*b;
	b = argv; // b is pointing to the first bit of the binary bits

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

int dectobin( int argc, char*argv)
{
	char*b, bits_in_string,c[100];//c[100] will be the array that stores the reverse characters

	int a,count=0,i,temp_a,temp_count;
	b = argv;//temporary buffer
	
	printf("The string keyed in is %s\n", b);
	a = atoi(b);
	printf("The string converted to integer is %d\n", a);

	temp_a=a;// so later at the end we still can print out the original a value instead of 0
	while( temp_a!=0)
	{
		b[count]= temp_a%2;
		temp_a /= 2;
		printf("b[%d]=%d\n",count, b[count]);

		++count;
	}
	printf("count is %d\n",count);// count how many times the integer got to be divided by 2 before it gets to zero	
	temp_count=count;// assign a temp count so we can decrement count without affect the limit 
	printf("The integer %d converted to binary will be ",a);
	for(i=0;i<count;++i)
	{
		bits_in_string= b[temp_count-1] +'0';// to convert integer back into character
		c[i]= bits_in_string;
		--temp_count;
		//printf("c[%d]=%c\n",i, c[i]);
		printf("%c", c[i]);

	}

	return 0;
}
