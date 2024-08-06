// To find sum of a0 + a1 x^1 + a2 x^2 +....... + an x^n 

#include <iostream>
#include <cmath>
using namespace std ;

int sum ( int arr[] , int n , int x ){
    int count = 0 ;
    for ( int i =0 ; i < n ; i++ ){
        count += arr[i]*pow(x,i);
    }
    return count ;
}

int main(){

    int n , x;
    cout << "enter number of elements in the array :" << endl;
    cin >> n ;

    int a[n] ;
    cout <<"enter elements in the array :" << endl ;

    for(int i=0 ; i<n ; i++ ){
        cout << "enter element " << i+1 << ":" << endl ;
        cin >> a[i] ;
    }

    cout << "enter value of x :" << endl ;
    cin >> x ;

    int result= sum( a, n , x) ;
    cout << "the final sum of series is : " << result ;

    return 0;
}