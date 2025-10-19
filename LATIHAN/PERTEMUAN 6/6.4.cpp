/*
===========================================================
PROGRAM : Linear Queue (Antrian Linier)
MATERI  : Mengenal Kondisi Queue
NAMA    : Miftahurrohmnaniah
NIM     : 241011400881
MATA KULIAH : STRUKTUR DATA
-----------------------------------------------------------
Keterangan:
Program ini menunjukkan kondisi-kondisi antrian linier:
a. Kosong
b. Penuh
c. Bisa diisi
d. Ada isinya
e. Tak bisa diisi lagi (belum ada data keluar)
f. Perlu direset
===========================================================
*/

#include <iostream>
using namespace std;

#define MAX 5 // batas maksimum antrian

int queue[MAX];     // array untuk menyimpan data
int front = -1;     // penunjuk depan antrian
int rear = -1;      // penunjuk belakang antrian

// Fungsi untuk mengecek kondisi antrian
bool isEmpty() { return (front == -1 || front > rear); }
bool isFull()  { return (rear == MAX - 1); }

// Menambahkan data ke antrian
void enqueue(int data) {
    if (isFull()) {
        cout << "Kondisi (b) Penuh: Antrian tidak bisa diisi lagi (OVERFLOW)\n";
        return;
    }
    if (front == -1) front = 0; // data pertama masuk
    rear++;
    queue[rear] = data;
    cout << "Data " << data << " dimasukkan ke antrian.\n";
}

// Menghapus data dari antrian
void dequeue() {
    if (isEmpty()) {
        cout << "Kondisi (a) Kosong: Tidak ada data untuk dihapus (UNDERFLOW)\n";
        return;
    }
    cout << "Data " << queue[front] << " dikeluarkan dari antrian.\n";
    front++;
    if (front > rear) { // antrian jadi kosong lagi
        front = rear = -1;
        cout << "Sekarang antrian kosong kembali.\n";
    }
}

// Menampilkan isi antrian
void display() {
    if (isEmpty()) {
        cout << "Antrian kosong.\n";
        return;
    }
    cout << "Isi antrian: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

// Mereset antrian
void resetQueue() {
    front = -1;
    rear = -1;
    cout << "Kondisi (f) RESET: Antrian dikosongkan dan siap digunakan kembali.\n";
}

int main() {
    cout << "=== SIMULASI KONDISI LINEAR QUEUE ===\n\n";

    // a. Kondisi Kosong
    cout << "(a) Kondisi Kosong:\n";
    if (isEmpty()) cout << "Antrian kosong, FRONT = " << front << ", REAR = " << rear << endl << endl;

    // b. Isi sebagian data
    cout << "(c) Kondisi Bisa Diisi:\n";
    enqueue(10);
    enqueue(20);
    display();
    cout << endl;

    // d. Ada isinya
    cout << "(d) Kondisi Ada Isinya:\n";
    cout << "Antrian saat ini memiliki data dan masih bisa diisi lagi.\n";
    display();
    cout << endl;

    // c. Tambah data sampai penuh
    enqueue(30);
    enqueue(40);
    enqueue(50);
    cout << "(b) Kondisi Penuh:\n";
    enqueue(60); // mencoba menambah saat penuh
    display();
    cout << endl;

    // e. Tidak bisa diisi lagi tapi belum ada data keluar
    cout << "(e) Kondisi Tidak Bisa Diisi Lagi (belum ada data keluar):\n";
    cout << "Antrian penuh tapi belum ada data yang dihapus.\n";
    display();
    cout << endl;

    // Menghapus sebagian data
    dequeue();
    dequeue();
    cout << "Setelah menghapus 2 data:\n";
    display();
    cout << endl;

    // f. Kondisi Perlu Reset
    cout << "(f) Kondisi Perlu Direset:\n";
    cout << "Rear sudah di ujung, tetapi ada ruang kosong di depan.\n";
    resetQueue(); // melakukan reset
    display();

    cout << "\n=== SELESAI ===";
    return 0;
}
