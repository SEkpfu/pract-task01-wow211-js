#include <iostream>
using namespace std;

int main() {
    double h1, r1, h2, r2, h3, r3, h4, r4, h5, r5;
    cin >> h1 >> r1 >> h2 >> r2 >> h3 >> r3 >> h4 >> r4 >> h5 >> r5;
    
    double s1 = h1 * r1;
    double s2 = h2 * r2;
    double s3 = h3 * r3;
    double s4 = h4 * r4;
    double s5 = h5 * r5;
    
    cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << endl;
    cout << (s1+s2+s3+s4+s5)/5;
    
    return 0;
}