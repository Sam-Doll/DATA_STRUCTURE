#include <iostream>
#include <string>
using namespace std;

void true_false(int i,int num,string current){

    if(i>num){
        cout<<current<<endl;
        return;
    }

    true_false(i+1, num, current +'T');

    true_false(i+1, num, current +'F');
    
}

int main(){

    int num;
    cout<<"enter num: "<<endl;
    cin>>num;

    true_false(1,num,"");
    
    return 0;
}