#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int nilai_integer;
    int nilai_char;
    int nilai_float;

    cin>> nilai_integer>> nilai_char>> nilai_float;

    cout<< nilai_integer<<endl;
    cout<< nilai_char<<endl;
    cout<< nilai_float<<endl;
    
    double lebar,tinggi;
    cout<<"masukan lebar persegi panjang :";
    cin>>lebar;
    cout<<"masukan tinggi persegi panjang :";
    cin>>tinggi;
     
    double luas = lebar*tinggi;
    double keliling = 2*(lebar + tinggi );
    
    cout<<"luas persegi panjang: "<< luas << endl;
    cout<<"keliling persegi panjang : "<< keliling << endl;
      
    int skor;
    cout<<"masukan skor (0-100): ";
    cin>> skor;
    
    if (skor < 0 || skor > 100){
     cout << "Skor tidak valid. Masukkan nilai antara 0 sampai 100." << endl;
        return 1;	
	}
    if (skor == 100) {
        cout << "Skor sempurna!" << endl;
    }
     if (skor >= 90) {
        cout << "Nilai: A" << endl;
    } else if (skor >= 80) {
        cout << "Nilai: B" << endl;
    } else if (skor >= 70) {
        cout << "Nilai: C" << endl;
    } else if (skor >= 60) {
        cout << "Nilai: D" << endl;
    } else {
        cout << "Nilai: F" << endl;
    }
    
    {
    double x1, y1, x2, y2;
    cout << "Masukkan koordinat titik A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik B (x2 y2): ";
    cin >> x2 >> y2;
    double jarak = sqrt (pow(x2 - x1, 2) + pow (y2 - y1, 2));
    cout << "Jarak antara titik A dan B adalah: " << jarak << endl;
	}

	
     
    return 0;
}

