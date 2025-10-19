#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int noUrut;
    string nama;
    int umur;
    string alamat;
    float nilai;
};

int main() {
    Mahasiswa mhs[15];

    for (int i = 0; i < 15; i++) {
        mhs[i].noUrut = i + 1;
        cout << "\nMasukkan data mahasiswa ke-" << mhs[i].noUrut << endl;
        cin.ignore(i == 0 ? 0 : 1, '\n');
        cout << "Nama    : "; getline(cin, mhs[i].nama);
        cout << "Umur    : "; cin >> mhs[i].umur;
        cin.ignore();
        cout << "Alamat  : "; getline(cin, mhs[i].alamat);
        cout << "Nilai   : "; cin >> mhs[i].nilai;
    }

    cout << "\n=== Data Semua Mahasiswa ===\n";
    for (int i = 0; i < 15; i++) {
        cout << "\nNo Urut : " << mhs[i].noUrut
             << "\nNama    : " << mhs[i].nama
             << "\nUmur    : " << mhs[i].umur
             << "\nAlamat  : " << mhs[i].alamat
             << "\nNilai   : " << mhs[i].nilai
             << endl;
    }

    return 0;
}
