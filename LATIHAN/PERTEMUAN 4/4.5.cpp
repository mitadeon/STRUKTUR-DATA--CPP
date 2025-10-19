#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;
    int top;

    cout << "Masukkan nilai top: ";
    cin >> top;

    if (top == -1)
        cout << "a. Stack KOSONG\n";
    else if (top == MAX - 1)
        cout << "b. Stack PENUH\n";
    else if (top < MAX - 1 && top >= 0)
        cout << "c. Stack BISA DIISI (ada ruang)\n";
    else if (top >= 0)
        cout << "d. Stack ADA ISINYA\n";
    else
        cout << "Nilai top tidak valid.\n";

    return 0;
}
