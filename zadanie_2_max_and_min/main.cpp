#include <iostream>

int main( )
{
    int massive[ 10 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int len = sizeof( massive ) / sizeof( massive[ 0 ] );

    if ( len ) 
    {
        std::cout << "massive: ";
        std::cout << massive[ 0 ];

        for ( int i = 1; i < len; i++ )
            std::cout << ", " << massive[ i ];
    }

    std::cout << std::endl;

    int min = massive[ 0 ];
    int max = massive[ 0 ];

    for ( int i = 1; i < len; i++ )
    {
        if ( massive[ i ] < min )
            min = massive[ i ];
        
        if ( massive[ i ] > max )
            max = massive[ i ];
    }

    std::cout << "min: " << min << std::endl;
    std::cout << "max: " << max << std::endl;

    return 0;
}