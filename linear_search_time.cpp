#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std ;

void initialize(int size , int a[]){

    for ( int i = 0 ; i < size ; i++){
        a[i]= i+1 ;
    }
}

void linear_search(int a[], int size, int x){

    for(int i = 0 ; i<size ; i++){
        if (a[i] == x ){
            cout << "Element found at index : " << i << endl ;
            return ;
        }
    }
    return;

}

int main(){

int size = 50 ;

    cout << left << setw(12) << "Size" 
         << setw(30) << "Average Duration (micro sec)" 
         << endl;
    cout << "-----------------------------------------" << endl;

while( size <= 500000 ){

    int*a = new int[size] ;
    initialize(size, a) ;

    auto start = chrono::high_resolution_clock::now();
        
    for( int i=0 ; i < 10000 ; i++ ){
        linear_search(a, size, size+1);
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> duration = end - start;

cout << left << setw(12)<< size 
    << setw(30) << fixed << setprecision(2) << duration.count()/10000
    << endl ;

    delete[] a;
    size*= 10 ;
}
    return 0 ;
}