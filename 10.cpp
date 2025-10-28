#include <iostream>
using namespace std;

int main() {
    int WORKERS = 4;
    int MONTHS = 3;
    
    double rates[WORKERS];
    double hours[WORKERS][MONTHS];
    double salary[WORKERS][MONTHS];
    double tax[WORKERS][MONTHS];
    double net[WORKERS][MONTHS];
    
    for (int i = 0; i < WORKERS; i++) {
        cin >> rates[i];
        for (int j = 0; j < MONTHS; j++) {
            cin >> hours[i][j];
            salary[i][j] = hours[i][j] * rates[i];
            tax[i][j] = salary[i][j] * 0.13;
            net[i][j] = salary[i][j] - tax[i][j];
        }
    }
    
    cout << endl << net[0][1] << endl;
    
    double totalTax3 = 0;
    for (int j = 0; j < MONTHS; j++)
        totalTax3 += tax[2][j];
    cout << totalTax3 << endl;
    
    int bestWorker = 0;
    for (int i = 1; i < WORKERS; i++)
        if (salary[i][2] > salary[bestWorker][2])
            bestWorker = i;
    cout << bestWorker + 1 << endl;
    
    double totalYear = 0;
    for (int i = 0; i < WORKERS; i++)
        for (int j = 0; j < MONTHS; j++)
            totalYear += salary[i][j];
    cout << totalYear << endl;

    double sum[WORKERS][2], tox, zp;
    for (int i = 0; i < WORKERS; i++) {
        double tox = 0, zp = 0;
        for (int j = 0; j < MONTHS; j++){
            tox += tax[i][j];
            zp += salary[i][j];}
        sum[i][0] = tox;
        sum[i][1] = zp;
    }
    for (int i = 0; i < WORKERS; i++) 
    cout << i+1 << ": налог = " << sum[i][0] << " зп =" << sum[i][1] << endl;
    return 0;
}