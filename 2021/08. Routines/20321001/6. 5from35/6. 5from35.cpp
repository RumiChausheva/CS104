//6
#include <iostream>
#include <cmath>
using namespace std;
double fak(int n)
{
    if (n <= 1) return 1;
    else return n * fak(n - 1);
}

int main()
{
    double C_5_35 = fak(35) / (fak(5) * fak(35 - 5));
    cout << C_5_35 << endl;
    return 0;
}

