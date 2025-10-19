#include <iostream>
using namespace std;

int main() {
  
    unsigned int alamat_x3 = 0x1000;
    int ukuran_int = sizeof(int);
    int selisih = 9 - 3;

    unsigned int alamat_x9 = alamat_x3 + (selisih * ukuran_int);

    cout << "Diketahui &x[3] = 0x" << hex << alamat_x3 << endl;
    cout << "Ukuran int = " << dec << ukuran_int << " byte" << endl;
    cout << "Selisih elemen = " << selisih << endl;
    cout << "Maka &x[9] = 0x" << hex << alamat_x9 << endl;

    return 0;
}
