#include <iostream>
#include <string>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa* next;
};

// Pointer top tanpa head global
Mahasiswa* top = NULL;

// Fungsi Push (Insert)
void insertData() {
    Mahasiswa* baru = new Mahasiswa;
    cout << "\n=== INPUT DATA MAHASISWA ===" << endl;
    cout << "Nama    : "; getline(cin, baru->nama);
    cout << "NIM     : "; getline(cin, baru->nim);
    cout << "Gender  : "; getline(cin, baru->gender);
    cout << "Nilai   : "; cin >> baru->nilai;
    cin.ignore();

    baru->next = top;
    top = baru;
    cout << "\nData berhasil ditambahkan ke Stack!" << endl;
}

// Fungsi Pop (Hapus)
void hapusData() {
    if (top == NULL) {
        cout << "\nStack kosong!" << endl;
    } else {
        Mahasiswa* hapus = top;
        top = top->next;
        cout << "\nData '" << hapus->nama << "' telah dihapus." << endl;
        delete hapus;
    }
}

// Fungsi Cetak
void cetakData() {
    if (top == NULL) {
        cout << "\nStack kosong!" << endl;
    } else {
        cout << "\n=== DAFTAR DATA DALAM STACK ===" << endl;
        Mahasiswa* bantu = top;
        while (bantu != NULL) {
            cout << "Nama   : " << bantu->nama << endl;
            cout << "NIM    : " << bantu->nim << endl;
            cout << "Gender : " << bantu->gender << endl;
            cout << "Nilai  : " << bantu->nilai << endl;
            cout << "-----------------------------" << endl;
            bantu = bantu->next;
        }
    }
}

int main() {
    int pilihan;
    do {
        cout << "\n==============================================" << endl;
        cout << " PROGRAM STACK TANPA HEAD (LINKED LIST)" << endl;
        cout << "==============================================" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. HAPUS DATA" << endl;
        cout << "3. CETAK DATA" << endl;
        cout << "4. EXIT" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: cout << "\nProgram selesai.\n"; break;
            default: cout << "\nPilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}
