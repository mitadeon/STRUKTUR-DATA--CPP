#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;
    int S[MAX];
    int top = -1;
    int data;

    while (true) {
        cout << "Masukkan data (999 untuk berhenti): ";
        cin >> data;
        if (data == 999) break;

        if (top < MAX - 1) {
            S[++top] = data;
            cout << "Data " << data << " berhasil di-PUSH ke Stack.\n";
        } else {
            cout << "Stack sudah PENUH!\n";
            break;
        }
    }

    return 0;
}
