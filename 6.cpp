#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char name1[21], name2[21];
    double h1, r1, h2, r2;
    
    cin >> name1 >> h1 >> r1 >> name2 >> h2 >> r2;
    
    double net1 = h1 * r1 * 0.87;
    double net2 = h2 * r2 * 0.87;
    
    if (net1 < 1000) cout << name1 << endl;
    if (net2 < 1000) cout << name2 << endl;
    
    double tax1 = h1 * r1 * 0.13;
    double tax2 = h2 * r2 * 0.13;
    
    if (tax1 > 50) cout << name1[0] << "-" << name1[strlen(name1)-1] << endl;
    if (tax2 > 50) cout << name2[0] << "-" << name2[strlen(name2)-1] << endl;
    
    return 0;
}