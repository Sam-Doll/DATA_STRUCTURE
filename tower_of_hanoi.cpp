#include <iostream>
using namespace std;

void toh(int n,char f,char a,char t){
    if(n==1){
        cout<<"Move disk 1 from "<<a<<" to "<<f<< endl;
        return;
    }else{
        toh(n-1,f,t,a);      
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<f<<endl; 
        toh(n-1,a,f,t);     
    }  
}

int main(){
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    char f,a,t;
    toh(n,'f','a','t');
    return 0;
}
