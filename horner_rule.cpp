#include <iostream>
using namespace std;

double hornerRule(double x, double coefficients[], int n) {
    double result = coefficients[0];
    
    for (int i = 1; i <= n; i++) {
        result = result * x + coefficients[i];
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;
    
    double coefficients[n + 1];
    cout << "Enter the coefficients (from a0 to an): ";
    
    for (int i = 0; i <= n; i++) {
        cin >> coefficients[i];
    }
    
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    
    double result = hornerRule(x, coefficients, n);
    cout << "The result of the polynomial evaluation is: " << result << endl;
    
    return 0;
}
