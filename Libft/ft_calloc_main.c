#include "libft.h"
#include <stdio.h>
#define ALLOCATE_SIZE   (10)
int	main(void)
{
    int* values = calloc( ALLOCATE_SIZE, sizeof(int) );
    if( values == NULL ){
        exit( EXIT_FAILURE );
    }
	printf("values\n");
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        printf( "%d ", values[i] );
    }
    printf( "\n" );
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        values[i] = i;
    }
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        printf( "%d ", values[i] );
    }
    printf( "\n\n" );
	printf("values2\n");
    int* values2 = calloc( ALLOCATE_SIZE, sizeof(int) );
    if( values2 == NULL ){
        exit( EXIT_FAILURE );
    }
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        printf( "%d ", values2[i] );
    }
    printf( "\n" );
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        values2[i] = i;
    }
    for( int i = 0; i < ALLOCATE_SIZE; ++i ){
        printf( "%d ", values2[i] );
    }
    printf( "\n" );
    free( values );
	free(values2);
}
