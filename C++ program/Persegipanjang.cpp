#include <iostream>

using namespace std;

int main() {

    int  luas, kll, p, l;

    // input 
    cout<<"****************^^^^^^^*************  "<<endl;
    cout<<" "<<endl;
    cout<<"Masukkan Nilai Panjang : ";cin>>p;
    cout<<"Masukkan Nilai Lebar : ";cin>>l;
    cout<<" "<<endl;
    cout<<"****************^^^^^^^*************  "<<endl;


    // proses
    luas = p*l;
    kll = p+l+p+l;

    // output
     cout<<"****************################*************  "<<endl;
     cout<<" "<<endl;
    cout<<"Hasil dari Luas Persegi Panjang adalah "<<luas<<endl;
    cout<<"Hasil dari Keliling Persegi Panjang adalah "<<kll<<endl;
    cout<<""<<endl;
    cout<<"****************################*************  "<<endl;

    return 0;
}