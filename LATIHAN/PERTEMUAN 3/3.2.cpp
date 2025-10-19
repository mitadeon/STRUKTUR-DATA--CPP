#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int noUrut;
    string nama;
    int umur;
};

int main() {
    Mahasiswa mhs[5];

    for (int i = 0; i < 5; i++) {
        mhs[i].noUrut = i + 1;
        cout << "Masukkan nama mahasiswa ke-" << mhs[i].noUrut << ": ";
        cin.ignore(i == 0 ? 0 : 1, '\n');
        getline(cin, mhs[i].nama);
        cout << "Masukkan umur: ";
        cin >> mhs[i].umur;
    }

    cout << "\n=== Detail Mahasiswa No Urut 2 ===\n";
    cout << "No Urut : " << mhs[1].noUrut << endl;
    cout << "Nama    : " << mhs[1].nama << endl;
    cout << "Umur    : " << mhs[1].umur << endl;

    return 0;
}
