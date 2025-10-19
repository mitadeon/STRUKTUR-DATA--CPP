//PROGRAM : Double Ended Queue - Pengisian dari Kanan

#include <iostream>
using namespace std;

#define MAX 5  // kapasitas deque

int Deque[MAX];
int Front = -1, Rear = -1;

// Fungsi untuk menambah data dari kanan
void insertRight(int data) {
    // Kondisi penuh kanan
    if ((Front == 0 && Rear == MAX - 1) || (Front == Rear + 1)) {
        cout << "Deque penuh kanan! Tidak bisa menambah data " << data << endl;
        return;
    }

    // Jika deque kosong
    if (Front == -1) {
        Front = Rear = 0;
    } 
    // Jika rear di akhir array
    else if (Rear == MAX - 1) {
        Rear = 0;
    } 
    // Geser ke kanan
    else {
        Rear = Rear + 1;
    }

    // Masukkan data
    Deque[Rear] = data;
    cout << "Data " << data << " berhasil dimasukkan dari kanan.\n";
}

// Menampilkan isi deque
void display() {
    if (Front == -1) {
        cout << "Deque kosong.\n";
        return;
    }

    cout << "Isi deque: ";
    int i = Front;
    while (true) {
        cout << Deque[i] << " ";
        if (i == Rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    cout << "=== PROGRAM MENGISI DEQUE DARI KANAN ===\n\n";

    // Mengisi deque dari kanan sampai penuh
    for (int i = 1; i <= 10; i++) {
        insertRight(i * 10); // contoh data: 10, 20, 30, ...
    }

    cout << "\n=== KONDISI AKHIR DEQUE ===\n";
    display();

    return 0;
}
