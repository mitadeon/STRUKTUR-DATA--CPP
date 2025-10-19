#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;
    int S[MAX] = {10, 20, 30, 40, 50}; // contoh stack berisi data
    int top = 4; // karena ada 5 data (indeks terakhir = 4)

    while (top >= 0) {
        cout << "Data yang diambil (POP): " << S[top--] << endl;
    }

    cout << "Stack sekarang KOSONG.\n";
    return 0;
}
