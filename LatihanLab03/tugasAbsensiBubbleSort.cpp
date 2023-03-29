#include <iostream>
using namespace std;

int InputData();
int* InputDataArray(int arr[],int length);
void BeforeSorting(int arr[],int length);
int* ProsesBubbleSort(int arr[], int length);
void AfterSorting(int arr[], int length);

int main()
{
    // Input Panjang Array
    int jumlahData = InputData();
    cout<<endl;
    
    // Alokasi Memori Dengan Fungsi 'malloc'
    int* dataArray = (int*) malloc(jumlahData * sizeof(int));
    // Input Data Array
    dataArray = InputDataArray(dataArray,jumlahData);
    cout<<endl;

    // Print Array Sebelum Sorting
    BeforeSorting(dataArray,jumlahData);
    cout<<endl;

    // Bubble Sort Logic
    dataArray = ProsesBubbleSort(dataArray, jumlahData);
    cout<<endl;

    // Print Array Setelah Sorting
    AfterSorting(dataArray,jumlahData);

    return 0;
}

/*====================================
 *Fungsi Input Data Panjang Array
======================================*/
int InputData()
{
    int data;
    cout<<"ALGORITMA BUBBLE SORT"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Masukkan Data = ";
    cin>>data;

    return data;
}

/*====================================
 *Fungsi Input Data Array Menurut Index
======================================*/
int* InputDataArray(int arr[],int length)
{
    for(int i=0; i<length ; i++)
    {
        cout<<"Masukkan Data Ke-"<<i+1<<" = ";
        cin>>arr[i];
    }

    return arr;
}

/*====================================
 *Fungsi Print Array Sebelum Sorting
======================================*/
void BeforeSorting(int arr[], int length)
{
    cout<<"Array belum terurut : ";
    for(int i=0; i<length; i++)
    {
        cout<<"["<<arr[i]<<"] ";
    }
}

/*====================================
 *Fungsi Print Array Setelah Sorting
======================================*/
void AfterSorting(int arr[], int length)
{
    cout<<"Hasil telah terurut : ";
    for(int i=0; i<length; i++)
    {
        cout<<"["<<arr[i]<<"] ";
    }
}

/*=========================================
 *Fungsi Logic Bubble Sort dan Print Array
===========================================*/
int* ProsesBubbleSort(int arr[], int length)
{
    cout<<"Proses Bubble Sort"<<endl;
    bool swap = false;

    while(swap == false)
    {
        swap = true;
        for(int i=0; i<length-1 ; i++ )
        {
            for(int i=0; i<length; i++)
            {
                cout<<"["<<arr[i]<<"] ";
            }
            cout<<endl;

            if(arr[i] > arr[i+1])
            {
                swap = false;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    return arr;
}

