#include <iostream>

using namespace std;

int Bagi(int,int);

int main()
{
    int a;
    int b;
    
    cout<<"Masukkan angka : ";
    cin>>a;
    cout<<"Masukkan pembagi : ";
    cin>>b;

    int hasil = Bagi(a,b);
    cout<<"Hasil Pembagian : "<<hasil;

    return 0;
}

int Bagi(int a, int b) 
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        return 1 + Bagi(a - b, b);
    }
}