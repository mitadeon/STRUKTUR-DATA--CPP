#include <iostream>
using namespace std;

int main() {
    
    unsigned int alamat_awal = 0x1000; 
    int baris = 2;
    int kolom = 4;
    int total_kolom = 14;
    int ukuran_long = sizeof(long); 

    int offset = (baris * total_kolom) + kolom;
    unsigned int alamat_x24 = alamat_awal + (offset * ukuran_long);

    cout << "Diketahui &x[0][0] = 0x" << hex << alamat_awal << endl;
    cout << "Ukuran long = " << dec << ukuran_long << " byte" << endl;
    cout << "Offset elemen = " << offset << endl;
    cout << "Maka &x[2][4] = 0x" << hex << alamat_x24 << endl;

    return 0;
}
