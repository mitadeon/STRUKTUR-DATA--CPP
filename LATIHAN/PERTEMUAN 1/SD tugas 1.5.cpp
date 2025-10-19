#include <iostream>
using namespace std;

int main() {
    int A, B, temp;

    cout << "Masukkan bilangan A: ";
    cin >> A;
    cout << "Masukkan bilangan B: ";
    cin >> B;

    temp = A;
    A = B;
    B = temp;

    cout << "Setelah ditukar:" << endl;
    cout << "Nilai A = " << A << endl;
    cout << "Nilai B = " << B << endl;

    return 0;
}
