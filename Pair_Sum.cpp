
// Find pair of elements in the array whose sum is also present in the same array
#include <iostream>
using namespace std ;

void res(int arr[] , int n ){
    for (int i = 0 ; i < n ; i++){
        for ( int j = i+1 ; j < n ; j++ ){
            for (int k = 0 ; k<n ; k++){
                if ( arr[i] + arr[j] == arr[k]){
                    cout << "( " << arr[i] << " , " << arr[j] << " )" << endl ;
                }
            }
        }
    }
}

int main(){

    int n ;
    cout << "enter number of elements in array: " << endl ;
    cin >> n;
    
    int arr[n];
    for(int i=0 ; i<n ; i++){
    cout << "enter element " << i+1 << endl ;
    cin >> arr[i];
    }

    res(arr , n);
    return 0 ;
}