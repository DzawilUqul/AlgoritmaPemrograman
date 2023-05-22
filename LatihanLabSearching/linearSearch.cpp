#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int searchKey);

int main()
{
    int arr[11] = {5,3,2,4,5,6,11,10,20,12,5};

    LinearSearch(arr, 11, 5);

    
    // cout<<"ditemukan hasil sejumlah : "<<hasil;

    return 0;
}

void LinearSearch(int arr[], int size, int searchKey)
{
    int counter = 0;
    int hasil = 0;
    for(int i=0; i<size; i++)
    {
        if(searchKey == arr[i])
        {
            counter ++;
            hasil = i;

            if(hasil > 1)
            {
                cout<<", di index ke "<<hasil<<endl;
            } else
            {
                cout<<"ditemukan di index ke "<<hasil<<endl;
            }
        }
    }

    cout<<"Jumlah Ketemu : "<<counter;
}