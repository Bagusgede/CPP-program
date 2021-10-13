// kepala program
#include <iostream> 


using namespace std;

int main()
{
    int x, y, z ;
    
    // cout => c Output 
    // cin => c Input
    // setiap akhir program atau akhir sebuah statement harus isi yang namanya (;) 
    // titik koma ini artinya penutup 

    cout<<"Masukkan bilangan 1 : "; cin >> x;
    cout<<"Masukkan bilangan 2 : "; cin >> y;
    cout<<"Masukkan bilangan 3 : "; cin >> z;
    
    if(x>y && x>z) { 
        if(y<z ){
            cout<<"Bilangan 1 : "<<x; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 2 : "<<y; cout<<" Terkecil" <<endl;
        }else{
            cout<<"Bilangan 1 : "<<x; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 3 : "<<z; cout<<" Terkecil" <<endl;
        }
    }else if(y>z && y>x){
        if(x<z){
            cout<<"Bilangan 2 : "<<y; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 1 : "<<x; cout<<" Terkecil" <<endl; 
        }else{
            cout<<"Bilangan 2 : "<<y; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 3 : "<<z; cout<<" Terkecil" <<endl; 
        }
    }else{
         if(x<y){
            cout<<"Bilangan 3 : "<<z; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 1 : "<<x; cout<<" Terkecil" <<endl; 
        }else{
            cout<<"Bilangan 3 : "<<z; cout<<" Terbesar" <<endl;
            cout<<"Bilangan 2 : "<<y; cout<<" Terkecil" <<endl; 
        }
    }

    return 0;
}