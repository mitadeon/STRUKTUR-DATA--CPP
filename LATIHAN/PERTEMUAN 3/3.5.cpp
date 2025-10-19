#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    int jumlah;        // jumlah buku tersedia
    bool diterbitkan;  // true = sudah diterbitkan, false = belum
};

vector<Buku> perpustakaan;

// --- Fungsi menampilkan semua buku
void tampilkanSemua() {
    cout << "\n=== Daftar Buku ===\n";
    if (perpustakaan.empty()) {
        cout << "Belum ada data buku.\n";
        return;
    }
    for (auto& b : perpustakaan) {
        cout << "No Akses : " << b.nomorAkses << endl;
        cout << "Penulis  : " << b.penulis << endl;
        cout << "Judul    : " << b.judul << endl;
        cout << "Jumlah   : " << b.jumlah << endl;
        cout << "Status   : " << (b.diterbitkan ? "Diterbitkan" : "Belum diterbitkan") << endl;
        cout << "--------------------------\n";
    }
}

// --- Fungsi menambah buku
void tambahBuku() {
    Buku b;
    cout << "Masukkan nomor akses: "; cin >> b.nomorAkses;
    cin.ignore();
    cout << "Masukkan nama penulis: "; getline(cin, b.penulis);
    cout << "Masukkan judul buku: "; getline(cin, b.judul);
    cout << "Masukkan jumlah buku: "; cin >> b.jumlah;
    b.diterbitkan = false;
    perpustakaan.push_back(b);
    cout << "Buku berhasil ditambahkan!\n";
}

// --- Fungsi menampilkan buku dari penulis tertentu
void tampilkanPenulisTertentu() {
    cin.ignore();
    string nama;
    cout << "Masukkan nama penulis: ";
    getline(cin, nama);

    cout << "\n=== Buku oleh " << nama << " ===\n";
    bool ada = false;
    for (auto& b : perpustakaan)
        if (b.penulis == nama) {
            ada = true;
            cout << "Judul: " << b.judul << " (Jumlah: " << b.jumlah << ")\n";
        }
    if (!ada) cout << "Tidak ada buku dari penulis tersebut.\n";
}

// --- Fungsi menghitung jumlah buku dengan judul tertentu
void jumlahJudulTertentu() {
    cin.ignore();
    string judul;
    cout << "Masukkan judul buku: ";
    getline(cin, judul);

    int total = 0;
    for (auto& b : perpustakaan)
        if (b.judul == judul)
            total += b.jumlah;

    cout << "Jumlah buku dengan judul \"" << judul << "\": " << total << endl;
}

// --- Fungsi menghitung total semua buku
void totalBuku() {
    int total = 0;
    for (auto& b : perpustakaan)
        total += b.jumlah;
    cout << "Total semua buku di perpustakaan: " << total << endl;
}

// --- Fungsi menerbitkan buku (mengurangi jumlah)
void terbitkanBuku() {
    int no;
    cout << "Masukkan nomor akses buku yang akan diterbitkan: ";
    cin >> no;

    for (auto& b : perpustakaan) {
        if (b.nomorAkses == no) {
            if (b.jumlah > 0) {
                b.jumlah--;
                b.diterbitkan = true;
                cout << "Buku berhasil diterbitkan!\n";
            } else {
                cout << "Buku sudah habis!\n";
            }
            return;
        }
    }
    cout << "Buku tidak ditemukan!\n";
}

// --- Program utama
int main() {
    int pilihan;
    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Tampilkan semua buku\n";
        cout << "2. Tambah buku baru\n";
        cout << "3. Tampilkan semua buku dari penulis tertentu\n";
        cout << "4. Tampilkan jumlah buku dengan judul tertentu\n";
        cout << "5. Tampilkan jumlah total buku di perpustakaan\n";
        cout << "6. Terbitkan buku\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tampilkanSemua(); break;
            case 2: tambahBuku(); break;
            case 3: tampilkanPenulisTertentu(); break;
            case 4: jumlahJudulTertentu(); break;
            case 5: totalBuku(); break;
            case 6: terbitkanBuku(); break;
            case 0: cout << "Keluar dari program.\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}
