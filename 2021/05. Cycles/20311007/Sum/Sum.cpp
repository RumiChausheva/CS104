﻿// 6. Сумата на естествените числа до зададено число
#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    int n, sum = 0;

    // Въвеждане на горна границя
    cout << "n=";
    cin >> n;

    // Циклличен алгоритъм с повторения
    for (int i = 1; i <= n; i++)
    {
        // Добавяме всяко следващо i към сумата
        sum = sum + i;
    }

    // Сума на числата до горна граница
    cout << "sum=" << sum << " ";

    return 0;
}