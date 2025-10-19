#include<iostream>
using namespace std;
int main ()
{
      
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
   return 0; 
}

