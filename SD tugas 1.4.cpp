#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    {
    double x1, y1, x2, y2;
    cout << "Masukkan koordinat titik A (x1): ";
    cin >> x1 ;
    cout << "Masukkan koordinat titik A (y1): ";
    cin >> y1;
    cout << "Masukkan koordinat titik B (x2): ";
    cin >> x2 ;
    cout << "Masukkan koordinat titik B (y2): ";
    cin >> y2;

    double jarak = sqrt (pow(x2 - x1, 2) + pow (y2 - y1, 2));
    cout << "Jarak antara titik A dan B adalah: " << jarak << endl;
	}

	
     
    return 0;
}