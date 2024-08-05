#include <iostream>
using namespace std;

int sum(int arr[], int n) {
    int sum = 0 ; 
    for ( int i = 0 ; i < n ; ++i ){
        sum += arr[i] ; 
    }
    return sum;
}

int main(){

    int n ;
    cout << "enter number of elements in the array: " ;
    cin >> n ;

    if (n <= 0 ){
        cout <<  "invalid number of elements. " << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = sum(arr, n);
    cout << "sum of all the array elements is: " << result << endl;

    return 0;
}