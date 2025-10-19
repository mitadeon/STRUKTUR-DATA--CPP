#include <iostream>
using namespace std;

int main() {

    unsigned int alamat_awal = 0x1000; 
    int baris = 2;
    int kolom = 4;
    int kolom_total = 8;
    int ukuran_float = sizeof(float);

    int offset = (baris * kolom_total) + kolom;
    unsigned int alamat_x24 = alamat_awal + (offset * ukuran_float);

    cout << "Diketahui &x[0][0] = 0x" << hex << alamat_awal << endl;
    cout << "Ukuran float = " << dec << ukuran_float << " byte" << endl;
    cout << "Offset elemen = " << offset << endl;
    cout << "Maka &x[2][4] = 0x" << hex << alamat_x24 << endl;

    return 0;
}
