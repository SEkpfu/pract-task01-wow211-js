#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double* hours = new double[n];
    double* rate = new double[n];
    double* salary = new double[n];
    double* tax = new double[n];
    double* net = new double[n];
    
    for (int i = 0; i < n; i++) {
        cin >> hours[i] >> rate[i];
        salary[i] = hours[i] * rate[i];
        tax[i] = salary[i] * 0.13;
        net[i] = salary[i] - tax[i];
    }
    
    int minIndex = 0;
    int maxIndex = 0;
    int countRich = 0;
    double totalTax = 0;
    
    for (int i = 0; i < n; i++) {
        if (net[i] < net[minIndex]) minIndex = i;
        if (salary[i] > salary[maxIndex]) maxIndex = i;
        if (net[i] > 50000) countRich++;
        totalTax += tax[i];
    }
    
    cout << minIndex + 1 << endl;
    cout << salary[maxIndex] << " " << maxIndex + 1 << endl;
    cout << countRich << endl;
    for (int i = 0; i < n; i++) {
        if (net[i] > 50000) cout << i + 1 << " ";
    }
    cout << endl << totalTax;
    
    return 0;
}