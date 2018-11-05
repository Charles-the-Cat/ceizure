#include <stdio.h>
#include <inttypes.h>

static uint8_t plain[ 16 ];

// static uint8_t a[ 256 ];

// static uint8_t i, j;

uint8_t update( uint8_t * in, int len )
{
	uint8_t i = 0;
	uint8_t j = 0;
	
	uint8_t a[ 256 ];
	for ( uint8_t k = 0; k < 256; k += 1 ) // populate a with unique integers
	{
		a[ k ] = k;
	}

	while ( in != '\0' )
	{
	        i += 1;
	        j += a[ i ];

	        uint8_t temp = a[ i ];
	        a[ i ] = a[ j ];
	        a[ j ] = temp;

		return a[ i + j ] ^ plain[ k ];
	}

}

int main()
{
	for ( int m = 0; m < sizeof(plain)/8; m += 1 ) 

	return 0;
}
