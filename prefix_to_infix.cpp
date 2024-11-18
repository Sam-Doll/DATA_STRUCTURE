#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string prefixToInfix(string prefix) {
    stack<string> st;

    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];
        if (isOperator(c)) {
            string operand1 = st.top(); st.pop();
            string operand2 = st.top(); st.pop();
            string temp = "(" + operand1 + c + operand2 + ")";
            st.push(temp);
        } 
        else {
            st.push(string(1, c));
        }
    }
    return st.top();
}

int main() {
    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    cout << "Infix expression: " << prefixToInfix(prefix) << endl;
    return 0;
}
