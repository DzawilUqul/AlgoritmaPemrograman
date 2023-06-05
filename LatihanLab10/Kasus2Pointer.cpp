#include <iostream>

using namespace std;

void Ganda(int*);

int main()
{
    int angka = 5;
    int* ptr_angka = &angka;
    cout<<"Niai awal = "<<angka<<endl;
    Ganda(ptr_angka);
    
    cout<<"Hasil = "<<*ptr_angka;

    return 0;
}

void Ganda(int* pointer)
{
    *pointer = *pointer * 2;
}