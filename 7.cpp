#include <iostream>
using namespace std;
int main()
{
    double avg = 0;
    for (int i = 1; i < 6; i++){
        double rates = 0, hours = 0, zp = 0;
        cin >> rates >> hours;
        zp = rates * hours;
        cout << i << ")" << zp << endl;
        avg += zp;
    }
    avg /= 5;
    cout << "ср зп: " << avg;
}