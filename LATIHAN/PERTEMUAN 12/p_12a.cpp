#include <iostream>
#include <string>
using namespace std;

// Struktur node Linked List untuk data mahasiswa
struct Mahasiswa {
    string NIM;
    string NAMA;
    int NILAI;
    Mahasiswa *next;
};

// Pointer utama (head)
Mahasiswa *head = NULL;

// -------------------------------------------------------
// a. Fungsi untuk menambah data baru (terurut naik berdasarkan NILAI)
void tambahData(string nim, string nama, int nilai) {
    Mahasiswa *baru = new Mahasiswa{nim, nama, nilai, NULL};

    // Jika list masih kosong atau nilai lebih kecil dari head
    if (head == NULL || nilai < head->NILAI) {
        baru->next = head;
        head = baru;
    } else {
        Mahasiswa *temp = head;
        while (temp->next != NULL && temp->next->NILAI < nilai)
            temp = temp->next;
        baru->next = temp->next;
        temp->next = baru;
    }

    cout << "✅ Data berhasil ditambahkan.\n";
}

// -------------------------------------------------------
// b. Fungsi menampilkan data dengan NILAI = 90
void tampilkan90() {
    Mahasiswa *temp = head;
    bool ada = false;

    cout << "\n=== DATA MAHASISWA DENGAN NILAI 90 ===\n";
    while (temp != NULL) {
        if (temp->NILAI == 90) {
            cout << temp->NIM << " - " << temp->NAMA << " - " << temp->NILAI << endl;
            ada = true;
        }
        temp = temp->next;
    }

    if (!ada)
        cout << "Tidak ada mahasiswa dengan nilai 90.\n";
}

// -------------------------------------------------------
// c. Fungsi menampilkan seluruh data mahasiswa
void tampilkanSemua() {
    Mahasiswa *temp = head;
    if (temp == NULL) {
        cout << "Data masih kosong.\n";
        return;
    }

    cout << "\n=== SELURUH DATA MAHASISWA ===\n";
    while (temp != NULL) {
        cout << temp->NIM << " - " << temp->NAMA << " - " << temp->NILAI << endl;
        temp = temp->next;
    }
}

// -------------------------------------------------------
// d. Fungsi menghapus data berdasarkan NIM
void hapusData(string nim) {
    if (head == NULL) {
        cout << "Data kosong.\n";
        return;
    }

    // Jika data yang dihapus ada di awal
    if (head->NIM == nim) {
        Mahasiswa *hapus = head;
        head = head->next;
        delete hapus;
        cout << "🗑️ Data dengan NIM " << nim << " berhasil dihapus.\n";
        return;
    }

    // Jika data berada di tengah atau akhir
    Mahasiswa *temp = head;
    while (temp->next != NULL && temp->next->NIM != nim)
        temp = temp->next;

    if (temp->next == NULL) {
        cout << "❌ Data tidak ditemukan.\n";
        return;
    }

    Mahasiswa *hapus = temp->next;
    temp->next = hapus->next;
    delete hapus;

    cout << "🗑️ Data dengan NIM " << nim << " berhasil dihapus.\n";
}

// -------------------------------------------------------
// e. Fungsi menghitung rata-rata nilai seluruh mahasiswa
void hitungRataRata() {
    Mahasiswa *temp = head;
    if (temp == NULL) {
        cout << "Data masih kosong.\n";
        return;
    }

    int total = 0, jumlah = 0;
    while (temp != NULL) {
        total += temp->NILAI;
        jumlah++;
        temp = temp->next;
    }

    cout << "\n📊 Rata-rata nilai kelas: " << (float)total / jumlah << endl;
}

// -------------------------------------------------------
// Fungsi utama (main program)
int main() {
    cout << "============================================\n";
    cout << "     PROGRAM LINKED LIST DATA MAHASISWA     \n";
    cout << "============================================\n";

    // Tambahkan data contoh (bisa juga input manual)
    tambahData("2007140022", "Miftahurrohmaniah", 95);
    tambahData("2007140011", "Rani", 85);
    tambahData("2007140033", "Bima", 90);

    // Menampilkan seluruh data
    tampilkanSemua();

    // Menampilkan data dengan nilai 90
    tampilkan90();

    // Menghapus data tertentu
    cout << "\nMenghapus data dengan NIM 2007140022...\n";
    hapusData("2007140022");

    // Menampilkan data setelah dihapus
    tampilkanSemua();

    // Menampilkan rata-rata nilai
    hitungRataRata();

    cout << "\n=== Program selesai ===\n";
    return 0;
}
