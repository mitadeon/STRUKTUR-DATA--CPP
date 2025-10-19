#include <iostream>
using namespace std;

int main() {
    unsigned int alamat_114 = 0x12EF; // &x[1][1][4]
    int ukuran_int = sizeof(int); // 4 byte
    int N2 = 3, N3 = 5;

    // Offset posisi
    int offset_114 = (1 * N2 * N3) + (1 * N3) + 4; // = 24
    int offset_003 = (0 * N2 * N3) + (0 * N3) + 3; // = 3

    int selisih = offset_114 - offset_003; // = 21 elemen
    unsigned int alamat_003 = alamat_114 - (selisih * ukuran_int);

    cout << hex;
    cout << "Diketahui &x[1][1][4] = 0x" << alamat_114 << endl;
    cout << "Selisih " << dec << selisih << " elemen x 4 byte = 84 byte" << endl;
    cout << "Maka &x[0][0][3] = 0x" << alamat_003 << endl;

    return 0;
}
