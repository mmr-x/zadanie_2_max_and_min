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

    std::cout << "min: " << massive[ 0 ] << std::endl;
    std::cout << "max: " << len << std::endl;

    return 0;
}