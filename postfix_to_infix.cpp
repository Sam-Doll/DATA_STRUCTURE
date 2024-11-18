#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix) {
    stack<string> st;

    for (char c : postfix) {
        if (isalpha(c) || isdigit(c)) {
            st.push(string(1, c));
        }
        else if (isOperator(c)) {
            string operand2 = st.top(); st.pop();
            string operand1 = st.top(); st.pop();
            string temp = "(" + operand1 + c + operand2 + ")";
            st.push(temp);
        }
    }
    return st.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    cout << "Infix expression: " << postfixToInfix(postfix) << endl;
    return 0;
}
