// BINARY SEARCH BY RECURSION 

#include <iostream>
using namespace std ;

void binary_search(int low , int high , int x , int a[]){

    if ( low == high ){
        if (x == a[low]){
        cout << "YOUR ENTERED NUMBER IS AT POSITION : " << low + 1;}
        else{
            cout << "ELEMENT NOT FOUND" ;
        }
    }

    else if( low > high ){
        cout<< "Your low value is greater that high .";
    }

    else {
        int mid = (low + high)/2 ;

        if (x==a[mid]){
            cout << "YOUR ENTERED NUMBER IS AT POSITION " << mid + 1 ;
        }
        else if(x>a[mid]){
         binary_search(mid+1, high , x , a);
        }
        else{
         binary_search(low , mid-1 , x , a );
        }
    }
}

int main(){
    int x , n ;

    cout << "Enter value of n : " << endl ;
    cin >> n ;

    cout << "Enter value of x : " << endl ;
    cin >> x ;

    int arr[n] ;
    for( int i = 0 ; i<n ; i++ ){
    cout << "Enter value of element  "<< i+1 <<" :" <<endl ;
    cin >> arr[i];
    }
     
    int low = 0;
    int high = n-1;

    binary_search( low ,high , x , arr) ;

    return 0 ;
}