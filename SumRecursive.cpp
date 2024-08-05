#include <iostream>
using namespace std;

int sum(int arr[], int n) {
   
    if ( n <= 0 ){
        return 0 ;
    }
    return arr[n - 1] + sum(arr, n - 1) ;

}

int main(){
    int n;
    cout << "Enter the number of elements: " ;
    cin >> n ; 

    if ( n <= 0 ){
        cout << "Enter a natural number next time." ;
        return 0 ;
    }

    int arr[n] ;

    cout << "enter elements in the array:" << endl ;
    for ( int i = 0 ; i < n ; ++i ) {
        cin >> arr[i] ;
    }

    int res = sum(arr, n) ;
    cout << "sum of all array elements recursively is: " << res << endl;

    return 0;
}