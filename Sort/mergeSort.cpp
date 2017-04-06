//  Merge sort:
//  Juan Flores-Moroco
//  Libro: Algorithms, Cormen, page: 34
#include <iostream>
#include <limits>

using namespace std;

size_t size = 0;

void print( const int* );
void merge( int*, int, int, int );
void mergeSort( int*, int, int );

int main() {
    cout << "Sort Methods (n lg n): \n";
    cout << "Merge Sort: \n";
    int secuencia[] = {9, 20, 18, 3, 13, 15, 4, 14, 5, 19, 6, 7, 16, 2, 1, 12, 10, 17, 11, 8,
        29, 40, 38, 23, 33, 35, 24, 34, 25, 39, 26, 27, 36, 22, 21, 32, 30, 37, 31, 28 };
    size = sizeof(secuencia)/sizeof(secuencia[ 0 ]);

    print( secuencia );
    mergeSort( secuencia, 0, size - 1 );
    print( secuencia );

    return 0;
}
void print( const int* A ) {
    for( size_t i = 0; i < size; i++ )
        cout << A[ i ] << ' ';
    cout << endl;
}
void merge( int* A, int p, int q, int r ) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[ n1 + 1 ], R[ n2 + 1 ];

    for( int i = 0; i < n1; ++i )
        L[ i ] = A[ p + i ];
    for( int j = 0; j < n2; ++j )
        R[ j ] = A[ q + j + 1 ];

    L[ n1 ] = numeric_limits<int>::max();
    R[ n2 ] = numeric_limits<int>::max();

    int i = 0;
    int j = 0;
    for( int k = p; k <= r; ++k ) {
        if( L[ i ] <= R[ j ] ) {
            A[ k ] = L[ i ];
            i = i + 1;
        } else {
            A[ k ] = R[ j ];
            j = j + 1;
        }
    }
}
void mergeSort( int* A, int p, int r ) {
    if( p < r ) {
        int q = (p + r) / 2;
        mergeSort( A, p, q );
        mergeSort( A, q + 1, r );
        merge( A, p, q, r );
    }
}


