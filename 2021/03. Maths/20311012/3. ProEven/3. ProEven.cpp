﻿#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива
    int a;

    // Въвеждаме стойност от клавиатурата
    cout << "a=?" << endl;
    cin >> a; // 123456

    // Отцепване на цифрите
    int a6 = (a / 100000) % 10; // 1
    int a4 = (a / 1000) % 10; // 3
    int a2 = (a / 10) % 10; // 5
    int pro = a6 * a4 * a2;

    // Отпечатваме резултата
    cout << pro << endl;

    return 0;
}
