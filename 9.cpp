#include <iostream>
using namespace std;

double minim(int a[])
{
    int min = a[0];
    for (int i = 1; i < 6; i++)
        if (a[i] < min) min = a[i];

    return min;
}

double maxim(int a[])
{
    int max = a[0];
    for (int i = 1; i < 6; i++)
        if (a[i] > max) max = a[i];
    return max;
}

double sch(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < 6; i++)
        if (a[i] > n) j += 1;
    return j;
}

double sum(int a[])
{
    int j = 0;
    for (int i = 0; i < 6; i++)
        j += a[i];
    return j;
}



int main()
{
    int a[]{1,2,3,4,5,6}, n;
    cin >> n;
    cout << minim(a) << endl;
    cout << maxim(a) << endl;
    cout << sch(a, n) << endl;
    cout << sum(a) << endl;
    return 0;
}