#include <iostream>

using namespace std;

int main(){

    int n;

    // input 

    cout<<"Masukkan nilai Siswa Anda : ";cin>>n;

    // proses Pembanding

    if (n >= 50 && n <= 100)
    {
        cout<<"Selamat Anda termasuk dalam Kategori Baik";
    }else{
        cout<<"Mohon maaf nilai Anda kurang, Belajar Lagi yaa ";
    }
    return 0;
}