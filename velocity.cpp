#include<iostream>
using namespace std;

int main(){

int v ;

cout<< "enter velocity of ball:";
cin >> v;

for (int i=0 ;  ;i++){

    v= (int)v/2;
    
    if ( v==0 ){
        cout << "the ball will be stopping after " << i+1 << " dip"   ;
        return 0;
    }
}
};