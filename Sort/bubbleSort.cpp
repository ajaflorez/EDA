//  BUbble sort:
//  Juan Flores-Moroco
//  Libro: Algorithms, Cormen, page: 40
#include <iostream>

using namespace std;

size_t size = 0;

void print( const int* );
void exchange( int&, int& );
void bubbleSort( int* );

int main() {
    cout << "Sort Methods (n**2): \n";
    cout << "Bubble Sort: \n";
    int secuencia[] = {9, 20, 18, 3, 13, 15, 4, 14, 5, 19, 6, 7, 16, 2, 1, 12, 10, 17, 11, 8,
        29, 40, 38, 23, 33, 35, 24, 34, 25, 39, 26, 27, 36, 22, 21, 32, 30, 37, 31, 28 };
    size = sizeof(secuencia)/sizeof(secuencia[ 0 ]);

    print( secuencia );
    bubbleSort( secuencia );
    print( secuencia );

    return 0;
}
void print( const int* A ) {
    for( size_t i = 0; i < size; i++ )
        cout << A[ i ] << ' ';
    cout << endl;
}
void exchange( int& a, int& b ) {
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort( int* A ) {
    for( int i = 0; i <= size - 2; ++i )
        for( int j = size - 1; j >= i + 1; --j )
            if( A[ j ] < A[ j - 1 ] )
                exchange( A[ j ], A[ j - 1 ]);
}


