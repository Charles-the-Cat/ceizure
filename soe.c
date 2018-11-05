#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * * argv )
{
	/*
	 * Assert that the program was run with one argument:
	 * a single, positive integer. If not, exit uncleanly.
	 */

	if ( argc != 2 || atoi( argv[1] ) < 0 )
	{
		fprintf( stderr, "Usage: %s <positive-integer> \n", argv[0] );
		exit( -1 );
	}

	/*
	 * The upper limit, n, is set to the number specified
	 * on the command line.
	 */

	unsigned int n = atoi( argv[1] );

	/*
	 * We already know that 0 and 1 can be excluded, so we exit without 
	 * printing anything.
	 */

	if ( n < 2 ) return 0;

	/*
	 * Now, we allocate memory to store the array of candidates.
	 * The array starts at 2 and goes to n inclusive, so it will be of
	 * size n-1.
	 */
	
	bool * a = malloc( ( n - 1 ) * sizeof( int ) ); 

	/*
	 * The array, a, is populated with the numbers from 2 to n inclusive.
	 */

	for ( int i = 0; i < n - 1; i++ )
	{
		a[ i ] = true;
	}




	for ( int i = 0; i < n - 1; i++ )
	{
		printf( "%d\n", a[i] );
	}

	/*
	 * The memory holding a is freed, and the program exits cleanly.
	 */

	free( a );
	return 0;
}
