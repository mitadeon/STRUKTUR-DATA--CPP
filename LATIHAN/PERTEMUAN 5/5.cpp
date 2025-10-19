#include <iostream>
using namespace std;

const int MAX = 10;
int STACK[MAX];
int top1 = -1;       // Stack1 mulai dari kiri
int top2 = MAX;      // Stack2 mulai dari kanan

// PUSH1
void push1(int data) {
    if (top1 + 1 == top2) {
        cout << "Stack PENUH! Tidak bisa PUSH ke Stack1.\n";
    } else {
        STACK[++top1] = data;
        cout << "Data " << data << " berhasil di-PUSH ke Stack1.\n";
    }
}

// POP1
void pop1() {
    if (top1 == -1) {
        cout << "Stack1 KOSONG!\n";
    } else {
        cout << "Data yang di-POP dari Stack1: " << STACK[top1--] << endl;
    }
}

// PUSH2
void push2(int data) {
    if (top2 - 1 == top1) {
        cout << "Stack PENUH! Tidak bisa PUSH ke Stack2.\n";
    } else {
        STACK[--top2] = data;
        cout << "Data " << data << " berhasil di-PUSH ke Stack2.\n";
    }
}

// POP2
void pop2() {
    if (top2 == MAX) {
        cout << "Stack2 KOSONG!\n";
    } else {
        cout << "Data yang di-POP dari Stack2: " << STACK[top2++] << endl;
    }
}

// Cetak isi Stack1
void cetakStack1() {
    if (top1 == -1) {
        cout << "Stack1 KOSONG.\n";
    } else {
        cout << "Isi Stack1 (dari atas ke bawah):\n";
        while (top1 != -1)
            cout << STACK[top1--] << endl;
        cout << "Stack1 sekarang kosong.\n";
    }
}

// Cetak isi Stack2
void cetakStack2() {
    if (top2 == MAX) {
        cout << "Stack2 KOSONG.\n";
    } else {
        cout << "Isi Stack2 (dari atas ke bawah):\n";
        while (top2 != MAX)
            cout << STACK[top2++] << endl;
        cout << "Stack2 sekarang kosong.\n";
    }
}

// Menu utama
int main() {
    int pilihan, data;

    do {
        cout << "\n=== MENU DOUBLE STACK ===\n";
        cout << "1. PUSH ke Stack1\n";
        cout << "2. POP dari Stack1\n";
        cout << "3. PUSH ke Stack2\n";
        cout << "4. POP dari Stack2\n";
        cout << "5. Cetak dan kosongkan Stack1\n";
        cout << "6. Cetak dan kosongkan Stack2\n";
        cout << "7. Keluar\n";
        cout << "Pilih menu (1-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                push1(data);
                break;
            case 2:
                pop1();
                break;
            case 3:
                cout << "Masukkan data: ";
                cin >> data;
                push2(data);
                break;
            case 4:
                pop2();
                break;
            case 5:
                cetakStack1();
                break;
            case 6:
                cetakStack2();
                break;
            case 7:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 7);

    return 0;
}
