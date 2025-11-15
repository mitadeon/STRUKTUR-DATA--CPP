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

// Pointer Head (Top of Stack)
Mahasiswa* head = NULL;

// Fungsi menambah data (Push)
void insertData() {
    Mahasiswa* baru = new Mahasiswa;
    cout << "\n=== INPUT DATA MAHASISWA ===" << endl;
    cout << "Nama    : "; getline(cin, baru->nama);
    cout << "NIM     : "; getline(cin, baru->nim);
    cout << "Gender  : "; getline(cin, baru->gender);
    cout << "Nilai   : "; cin >> baru->nilai;
    cin.ignore();

    baru->next = head;
    head = baru;
    cout << "\nData berhasil dimasukkan ke stack!" << endl;
}

// Fungsi menghapus data (Pop)
void hapusData() {
    if (head == NULL) {
        cout << "\nStack kosong, tidak ada data yang dihapus!" << endl;
    } else {
        Mahasiswa* hapus = head;
        head = head->next;
        cout << "\nData '" << hapus->nama << "' telah dihapus dari stack." << endl;
        delete hapus;
    }
}

// Fungsi mencetak data
void cetakData() {
    if (head == NULL) {
        cout << "\nStack kosong!" << endl;
    } else {
        cout << "\n=== DAFTAR DATA MAHASISWA ===" << endl;
        Mahasiswa* bantu = head;
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
    int pilih;
    do {
        cout << "\n==============================================" << endl;
        cout << " PROGRAM STACK MENGGUNAKAN LINKED LIST (HEAD)" << endl;
        cout << "==============================================" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. HAPUS DATA" << endl;
        cout << "3. CETAK DATA" << endl;
        cout << "4. EXIT" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: cout << "\nProgram selesai.\n"; break;
            default: cout << "\nPilihan tidak valid!\n";
        }
    } while (pilih != 4);

    return 0;
}
