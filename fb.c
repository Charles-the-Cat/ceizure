#include <stdio.h>

#define LEN 100

struct FBpair
{
	int num;
	char * string;
};

int main()
{
	const int NUMPAIRS = 2;
	struct FBpair pairs[NUMPAIRS] =
	{
		(struct FBpair){ 3, "fizz" },
		(struct FBpair){ 5, "buzz" }
	}

	puts( "0" );
	for ( int i = 1; i <= LEN; i++ )
	{
		/* First, assert whether number is to be printed or replaced */
		int notMultiple = 0;
		for ( int k = 0; k < NUMPAIRS; k++ )
		{
			notMultiple += !( i % k);
		}
		if ( !notNumber )
		{
			printf( "%d\n", i );
		}
		else
		{
		}
	}

	return 0;
}
