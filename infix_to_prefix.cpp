#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    stack<char> st;
    string result;
    
    for (int i = 0; i < infix.length(); i++) {
        char current = infix[i];

        if (isalnum(current)) {
            result += current;
        } else if (current == ')') {
            st.push(current);
        } else if (current == '(') {
            while (!st.empty() && st.top() != ')') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(current)) {
                result += st.top();
                st.pop();
            }
            st.push(current);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string infix;
    cin >> infix;
    cout << infixToPrefix(infix) << endl;
    return 0;
}
