#include <iostream>

using namespace std;

int main(){

    int luas, kll, r;

    // input
    double phi = 3.14;

    cout<<"Masukkan nilai jari jari :";cin>>r;

    // proses 
    luas = phi*r*r;
    kll = 2*phi*r;

    // output

    cout<<"Hasil dari luas lingkaran adalah "<<luas<<endl;
    cout<<"Hasil dari keliling lingkaran adalah "<<kll<<endl;

    return 0;



}