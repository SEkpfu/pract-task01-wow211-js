#include <iostream>
using namespace std;

void inputWorker(double& hours, double& rate, double& bonus);

int main() {
    double h, r, b;
    inputWorker(h, r, b);
    
    double salary = h * r * (1 + b/100);
    cout << salary;
    
    return 0;
}

void inputWorker(double& hours, double& rate, double& bonus) {
    cin >> hours >> rate >> bonus;
}