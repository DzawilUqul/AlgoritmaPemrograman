#include <iostream>

using namespace std;

int main()
{
    int angka = 5;
    int *ptr_angka = &angka;
    cout<<"angka = "<<angka<< " *ptr_angka = "<<*ptr_angka;
    return 0;
}