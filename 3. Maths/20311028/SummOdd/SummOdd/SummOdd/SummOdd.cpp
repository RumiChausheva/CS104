// 2. ���� �� ������� �� ������� ������� �� 5 ������� �����
#include <iostream>
using namespace std;
int main()
{
    // ����������� ����������� ����������
    int a;

    // ��������� �������� �� ������������
    cout << "a=?" << endl;
    cin >> a; // 56789

    // ��������� �� �������
    int a1 = (a / 10000) % 10; // 5
    int a3 = (a / 100) % 10; // 7
    int a5 = (a / 1) % 10; // 9
    int sum = a5 + a7 + a9;

    // ����������� ���������
    cout << sum << endl;

    return 0;
}