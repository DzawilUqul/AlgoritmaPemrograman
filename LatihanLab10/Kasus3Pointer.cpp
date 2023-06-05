#include <iostream>

using namespace std;

void Kali(int* num1, int* num2, int* result);

int main()
{
    int num1;
    int num2;
    int result;
    int* ptr_result = &result;


    cout<<"Masukkan angka pertama = ";
    cin>>num1;
    int* ptr_num1 = &num1;
    
    cout<<"Masukkan angka kedua = ";
    cin>>num2;
    int* ptr_num2 = &num2;

    Kali(ptr_num1,ptr_num2,&result);

    cout<<"Hasil = "<<*ptr_result;

    return 0;
}

void Kali(int* num1, int* num2, int* result)
{
    *result = (*num1) * (*num2);
}