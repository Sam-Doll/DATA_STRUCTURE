// To find missing element in a given consecutive array of integers
#include <iostream>
using namespace std ;

int miss(int arr[], int n ){

    int j = arr[0] ;
    int e = arr[n-1] ;
    int c = 0 ;

     for ( int k =j ; k<=e ; ++k){
        c = c ^ k ;
    }
    
    for( int i =0 ; i < n ; ++i){
        c = c ^ arr[i] ;
    }
    
    return c ;
}

int main(){

    int n ;
    cout << "Enter number of elements in array: " << endl ;
    cin >> n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
    cout << "Enter consecutive element number : " << i+1 << endl ;
    cin >> arr[i];
    }
   
    cout << "Missing number is : " << miss(arr,n) ;

    return 0 ; 
}