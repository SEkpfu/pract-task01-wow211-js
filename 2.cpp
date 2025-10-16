#include <iostream>
using namespace std;

double calcSalary(double hours, double rate, double bonus);
double calcTax(double salary);
double calcNet(double salary, double tax);

int main() {
    double hours, rate, bonus;
    cin >> hours >> rate >> bonus;
    
    double salary = calcSalary(hours, rate, bonus);
    double tax = calcTax(salary);
    double net = calcNet(salary, tax);
    
    cout << salary << " " << tax << " " << net;
    
    return 0;
}

double calcSalary(double hours, double rate, double bonus) {
    return hours * rate * (1 + bonus/100);
}

double calcTax(double salary) {
    return salary * 0.13;
}

double calcNet(double salary, double tax) {
    return salary - tax;
}