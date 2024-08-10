// sum of f(x)= a0 + x [a1 + x [a2+ x[a3+ ....................+x[an]]]]

#include <iostream>
using namespace std;

 int func(int a[], int n ,int x , int i  ){

        if (i == n-1){
            return a[n-1];
        }
        return a[i]+ x* func(a ,n, x , i+1) ;

 }
        
int main(){

    int x , n , i = 0;

    cout << "Enter value of n : " << endl ;
    cin >> n ;

    int a[n] ;
    cout << "Enter value of x : " << endl ;
    cin >> x ;

    for( int i =0 ; i<n ; i++ ){
    cout << "Enter value of element  "<< i+1 <<" :" <<endl ;
    cin >> a[i];
    }
    int answer = func(a,  n , x , i ); 
    cout<< "Total sum of the series is " << answer ;

    return 0 ;
}