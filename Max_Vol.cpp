#include <iostream>
#include <iomanip>

using namespace std ;

int main(){
    int n ;
    cout << "Enter number of lines: "  << endl ;
    cin >> n ;

    int a[n];
    for(int i=0 ; i<n ; i++){
    cout << "Enter height of line " <<  i+1 << " from x-axis: "  << endl ;
    cin >> a[i];
    }

    float max = 0.0 ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){

            float pi = 22.0/7.0 ;
            float radius = (0.5)*(j-i) ;

            float lower_Vol = ( pi * radius *radius*a[i] )  ;

            float upper_Vol =  (0.5)*(pi*radius*radius*(a[j] - a[i]) ) ;

            float vol = lower_Vol + upper_Vol ;

            if ( vol > max ){
                max = vol ;
            }
        }
    }

    cout << fixed << setprecision(2) <<"Maximum volume of cylinder is : " << max ;

    return 0 ;
}