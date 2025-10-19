/*
===========================================================
PROGRAM : Menghitung Kondisi Linear Queue
MATERI  : Linear Queue (Antrian Linier)
NAMA    : Miftahurrohmnaniah
NIM     : 241011400881
MATA KULIAH : STRUKTUR DATA
-----------------------------------------------------------
Program ini menghitung:
a. Jumlah pengantri yang belum dilayani
b. Jumlah kolom (ruang) yang masih bisa diisi
===========================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n = 100;  // kapasitas maksimum antrian
    int F = 15;   // posisi Front
    int R = 37;   // posisi Rear

    cout << "=== PROGRAM KONDISI LINEAR QUEUE ===\n\n";
    cout << "Kapasitas maksimum antrian (n) = " << n << endl;
    cout << "Posisi Front (F) = " << F << endl;
    cout << "Posisi Rear  (R) = " << R << endl;
    cout << "--------------------------------------\n";

    // a. Menghitung jumlah pengantri yang belum dilayani
    int jumlahPengantri = (R - F) + 1;

    // b. Menghitung jumlah kolom yang masih bisa diisi
    int sisaKolom = n - (R + 1);

    // Menampilkan hasil
    cout << "a. Jumlah pengantri yang belum dilayani = " << jumlahPengantri << endl;
    cout << "b. Jumlah kolom yang masih bisa diisi    = " << sisaKolom << endl;

    cout << "\n=== HASIL PERHITUNGAN SELESAI ===" << endl;
    return 0;
}
