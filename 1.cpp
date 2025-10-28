#include <iostream>
using namespace std;

int main() {
    double hours, rate, bonus;
    cin >> hours >> rate >> bonus;
    
    double salary = hours * rate * (1 + bonus/100);
    cout << salary;
    
    return 0;
}