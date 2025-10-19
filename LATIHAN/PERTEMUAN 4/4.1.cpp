#include <iostream>

using namespace std;

int main() {
    int stackArr[10];  // Array 1D untuk stack, ukuran 10 elemen
    int top = -1;      // Indeks top, -1 berarti kosong

    while (true) {
        int data;
        cout << "Masukkan data: ";  // Prompt untuk input (opsional, untuk kejelasan)
        cin >> data;

        if (data == 999) {
            cout << "Proses selesai." << endl;
            break;
        }

        if (data >= 60) {
            // Proses PUSH
            if (top == 9) {
                cout << "Stack Penuh" << endl;
                break;
            } else {
                top++;             
                stackArr[top] = data;  // Simpan data ke stack
                // Tidak ada output khusus, lanjut input berikutnya
            }
        } else {
            // Proses POP (data < 60)
            if (top == -1) {
                cout << "Stack Kosong" << endl;
                break;
            } else {
                // Ambil dan cetak isi stack (top element)
                cout << stackArr[top] << endl;
                top--;  // Decrement top (pop)
                // Lanjut input berikutnya
            }
        }
    }

    return 0;
}

