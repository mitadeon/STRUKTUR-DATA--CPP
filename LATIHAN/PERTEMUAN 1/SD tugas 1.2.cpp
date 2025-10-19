#include<iostream>
using namespace std;
int main ()
{
    int a,b,luas,keliling;

    cout<<"==========menghiung luas dan keliling persegi panjang=========="<<endl;
    cout<<"Masukkan nilai panjang : ";
    cin>>a;
    cout<<"Masukkan nilai lebar : ";
    cin>>b;     
    luas = a*b;
    keliling = 2*(a+b);
    cout<<"Luas Persegi Panjang : "<<luas<<endl;
    cout<<"Keliling Persegi Panjang : "<<keliling<<endl;
    return 0;

}