#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std ;

void initialize(int size , int a[]){

    for ( int i = 0 ; i < size ; i++){
        a[i]= i+1 ;
    }
}

void pair_sum(int arr[] , int n ){
    for (int i = 0 ; i < n ; i++){
        for ( int j = i+1 ; j < n ; j++ ){
            for (int k = 0 ; k<n ; k++){
                if ( arr[i] + arr[j] == arr[k]){
                    //cout << "( " << arr[i] << " , " << arr[j] << " )" << endl ;
                }
            }
        }
    }
}

int main(){

int size = 40 ;

    cout << left << setw(12) << "Size" 
         << setw(30) << "Average Duration (micro sec)" 
         << endl;
    cout << "-----------------------------------------" << endl;

while( size <= 350 ){

    int*a =new  int[size] ;
    initialize(size, a) ;

    auto start = chrono::high_resolution_clock::now();
        
    for( int i=0 ; i < 100; i++ ){
        pair_sum(a, size);
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> duration = end - start;

cout << left << setw(12)<< size 
    << setw(30) << fixed << setprecision(2) << duration.count()/100
    << endl ;

    delete[] a;
    size = size + 50 ;
}
    return 0 ;
}