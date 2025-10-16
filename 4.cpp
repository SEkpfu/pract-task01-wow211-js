#include <iostream>
using namespace std;

void calcAll(double hours, double rate, double bonus, 
             double& salary, double& tax, double& net);

int main() {
    double h, r, b;
    cin >> h >> r >> b;
    
    double s, t, n;
    calcAll(h, r, b, s, t, n);
    
    cout << s << " " << t << " " << n;
    
    return 0;
}

void calcAll(double hours, double rate, double bonus, 
             double& salary, double& tax, double& net) {
    salary = hours * rate * (1 + bonus/100);
    tax = salary * 0.13;
    net = salary - tax;
}