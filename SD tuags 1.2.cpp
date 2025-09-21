#include<iostream>
using namespace std;
int main ()
{
    double lebar,tinggi;
    cout<<"masukan lebar persegi panjang :";
    cin>>lebar;
    cout<<"masukan tinggi persegi panjang : ";
    cin>>tinggi ;

    double luas = lebar*tinggi;
    double keliling =2*(lebar+tinggi);

    cout<<"luas persegi panjang :"<<endl;
    cout<<luas<<endl;
    cout<<"keliling persegi panjang :"<<endl;
    cout<<keliling<<endl;
    return 0;
}