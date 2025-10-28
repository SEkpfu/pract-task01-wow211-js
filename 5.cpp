#include <iostream>
using namespace std;

int main() {
    double h1, r1, h2, r2;
    cin >> h1 >> r1 >> h2 >> r2;
    
    double s1 = h1 * r1;
    double s2 = h2 * r2;
    
    if (s1 > s2) cout << "1" << endl;
    else if (s2 > s1) cout << "2" << endl;
    else cout << "0" << endl;
    
    cout << s1 + s2;
    
    return 0;
}