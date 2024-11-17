#include <iostream>
#include <stack>
using namespace std;

bool is_valid(string s){
    int n= s.size();
    stack<char> st;
    bool ans = true ;
    for(int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='['|| s[i]=='('){
            st.push(s[i]);
        }else if( s[i]==')'){
            if( !st.empty() && st.top() =='('){
                st.pop();
            }else{
                ans == false;
                break;
            }
        }else if(s[i]==']'){
            if( !st.empty() && st.top() =='['){
                st.pop();
            }else{
                ans == false;
                break;
            }
        }else if(s[i]=='}'){
            if( !st.empty() && st.top() =='{'){
                st.pop();
            }else{
                ans == false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }else {
        return ans;
    }
}
int main(){
    string str;
    cout<<"Enter parentheses: "<<endl;
    cin>> str;
    if(is_valid(str)==true){
        cout<<"valid parentheses!"<<endl;
    }else{
        cout<<"invalid parentheses!"<<endl;
    }
    return 0;
}