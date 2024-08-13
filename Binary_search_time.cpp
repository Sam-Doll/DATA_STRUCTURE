#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std ;

void initialize(int size , int a[]){

    for ( int i = 0 ; i < size ; i++){
        a[i]= i+1 ;
    }

}

void binary_search(int a[], int size , int x){

    int low = 0 ;
    int high = size-1;
     
    while (high >= low){
        int mid = low + (high - low) / 2;

        if (a[mid] == x) {
            return ;
        }
        else if(a[mid] < x ){
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
    }
}

int main(){

int size = 50 ;

    cout << left << setw(12) << "Size" 
         << setw(30) << "Average Duration (nano sec)" 
         << endl;
    cout << "-----------------------------------------" << endl;

while( size <= 500000 ){

    int*a =new  int[size] ;
    initialize(size, a) ;

    auto start = chrono::high_resolution_clock::now();
        
    for( int i=0 ; i < 100000 ; i++ ){
        binary_search(a, size, size+1);
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, nano> duration = end - start;

cout << left << setw(12)<< size 
    << setw(30) << fixed << setprecision(2) << duration.count()/100000
    << endl ;

    delete[] a;
    size = size * 10 ;
}
    return 0 ;
}