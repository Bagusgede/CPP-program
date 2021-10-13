#include <iostream>


using namespace std;

int main(){

    int bil;

    // input    
    cout<<"masukkan bilangan : ";cin>>bil;
    
    // proses
    do
    {
       if (bil>0)
    {
        cout<<"Positif";
    }
    else if(bil==0)
    {
        cout<<"Netral";
    }
    else
    {
        cout<<"Negatif";
    }
    } 
    while (bil);
    
   

    return 0;
    
}