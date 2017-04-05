//  Insertion sort:
//  Juan Flores-Moroco
//  Libro: Algorithms, Cormen, page: 18
#include <iostream>

using namespace std;

const size_t size = 20;

void print( const int* );
void insertionSort( int* );

int main() {
    cout << "Sort Methods (n**2): \n";
    cout << "Insertion Sort: \n";
    int secuencia[ size ] = {9, 20, 18, 3, 13, 15, 4, 14, 5, 19, 6, 7, 16, 2, 1, 12, 10, 17, 11, 8 };

    print( secuencia );
    insertionSort( secuencia );
    print( secuencia );

    return 0;
}
void print( const int* A ) {
    for( size_t i = 0; i < size; i++ )
        cout << A[ i ] << ' ';
    cout << endl;
}

void insertionSort( int* A ) {
    int key = 0;
    int i = 0;
    for( size_t j = 1; j < size; ++j ) {
        key = A[ j ];
        i = j - 1;
        while( i >= 0 && A[ i ] > key ) {
            A[ i + 1 ] = A[ i ];
            i = i - 1;
        }
        A[ i + 1 ] = key;
    }
}

/*void insertionSort( int* A ) {
    int key = 0;
    int i = 0;
    //  Loop que inicia en el segundo elemento
    for( size_t j = 1; j < size; ++j ) {
        //  key: elemento a insertar en su orden
        key = A[ j ];
        //  i: index del elemento anterior a comparar
        i = j - 1;
        // Loop que desciende para comparar con key
        while( i >= 0 && A[ i ] > key ) {
            //  Coloca el elemento en la siguiente posicion
            A[ i + 1 ] = A[ i ];
            //  i: index desciende al anterior
            i = i - 1;
        }
        // Coloca key en la posicion(orden) que le corresponde
        A[ i + 1 ] = key;
    }
} */

