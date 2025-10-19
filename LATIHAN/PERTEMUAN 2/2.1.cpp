#include <iostream>
using namespace std;

int main() {
    char x[12]; // deklarasi array 1 dimensi

    cout << "Alamat elemen-elemen array x:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Alamat &x[" << i << "] = " << (void*)&x[i] << endl;
    }

    return 0;
}
