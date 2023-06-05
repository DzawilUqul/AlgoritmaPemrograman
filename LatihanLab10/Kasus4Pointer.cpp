#include <iostream>

using namespace std;

void IsiArray(int* arr, int ukuran);
void PrintArray(int* arr, int ukuran);

int main()
{
    int ukuran;
    cout<<"Masukkan jumlah elemen array = ";
    cin>>ukuran;

    int* arr = new int[ukuran];

    IsiArray(arr,ukuran);
    PrintArray(arr, ukuran);

    delete[] arr;

    return 0;
}

void IsiArray(int* arr, int ukuran)
{
    cout<<"masukkan "<<ukuran<<" elemen array :\n";
    for(int i=0; i<ukuran; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
}

void PrintArray(int* arr, int ukuran)
{
    cout<<"elemen array : ";
    for(int i=0; i<ukuran; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}