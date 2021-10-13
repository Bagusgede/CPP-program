#include <iostream>

using namespace std;

int main(){

    int n;

    // input user

    cout<<"Masukkan Nilai siswa : ";cin>>n;
    
    // proses

    if (n >= 0 &&  n<49)
    {
        cout<<"Nilai Anda E";

    }else if (n >= 50 && n<59)
    {
        cout<<"Nilai Anda D";
    }
    else if (n >= 60 && n<69)
    {
        cout<<"Nilai Anda C";
    }
    else if (n >= 70 && n<79)
    {
        cout<<"Nilai Anda B";
    }
    else if (n >= 80 && n<100){

        cout<<"Nilai Anda A";

    }else{
        cout<<"Error";
    }

    return 0;
}
    
    
    
