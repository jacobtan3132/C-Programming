//convert decimal to binary

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char*b, bits_in_string,c[100]; //c[100] will be the array that stores the reverse characters

	int a,count=0,i,temp_a,temp_count;
  
	b = argv[1];//temporary buffer
	
	printf("The string keyed in is %s\n", b);
	a = atoi(b);
	printf("The string converted to integer is %d\n", a);

	temp_a=a; // so later at the end we still can print out the original a value instead of 0 the termination point
  
	while( temp_a!=0)
	{
		b[count]= temp_a%2; //get the first remainder for the value we wish to convert
		temp_a /= 2;        //then only we divide the the value by 2
		printf("b[%d]=%d\n",count, b[count]);

		++count;
	}
	printf("count is %d\n",count); // count how many times the integer got to be divided by 2 before it gets to zero	
  
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
