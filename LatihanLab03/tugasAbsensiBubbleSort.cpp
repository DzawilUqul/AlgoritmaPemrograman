#include <iostream>
#include <stdlib.h>
using namespace std;

int InputData();
int* InputDataArray(int arr[],int length);
int* ProsesBubbleSort(int arr[], int length);
int* ProsesSelectionSort(int arr[], int length);
void FungsiTampil(int arr[], int length);

int main()
{
    cout<<"ALGORITMA BUBBLE SORT"<<endl;
    cout<<"---------------------"<<endl;

    // Input Panjang Array
    int jumlahData = InputData();
    cout<<endl;
    
    /*  
        Alokasi Memori Dengan Fungsi 'malloc'
        Menggunakan malloc agar array 100% pointer
    */
    int* dataArray = (int*) malloc(jumlahData * sizeof(int));
    
    // Input Data Array
    dataArray = InputDataArray(dataArray,jumlahData);
    cout<<endl;

    // Print Array Sebelum Sorting
    cout<<"Array belum terurut : ";
    FungsiTampil(dataArray,jumlahData);
    cout<<endl;

    // Bubble Sort Logic
    dataArray = ProsesBubbleSort(dataArray, jumlahData);
    cout<<endl;

    // Print Array Setelah Sorting
    cout<<"Hasil telah terurut : ";
    FungsiTampil(dataArray,jumlahData);
    cout<<endl;

    //===========================================================================

    cout<<"ALGORITMA SELECTION SORT"<<endl;
    cout<<"-------------------------"<<endl;

    // Input Panjang Array
    int jumlahDataSelection = InputData();
    cout<<endl;

    // Alokasi Memori Dengan Fungsi 'malloc'
    int* dataArraySelection = (int*) malloc(jumlahDataSelection * sizeof(int));
    dataArraySelection = InputDataArray(dataArraySelection,jumlahDataSelection);
    cout<<endl;

    // Print Array Sebelum Sorting
    FungsiTampil(dataArraySelection,jumlahDataSelection);
    cout<<endl;

    // Insertion Sort Logic
    dataArraySelection = ProsesSelectionSort(dataArraySelection, jumlahDataSelection);
    cout<<endl;

    // Print Array Setelah Sorting
    FungsiTampil(dataArraySelection,jumlahDataSelection);

    return 0;
}

/*====================================
 *Fungsi Input Data Panjang Array
======================================*/
int InputData()
{
    int data;
    cout<<"Masukkan Data = ";
    cin>>data;

    return data;
}

/*====================================
 * Fungsi Input Data Array Menurut Index
 * Return array menggunakan pointer dengan menambahkan simbol '*' setelah int
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
 *Fungsi Print Array Setelah Sorting
======================================*/
void FungsiTampil(int arr[], int length)
{
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
            FungsiTampil(arr,length);
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

/*=========================================
 *Fungsi Logic Insertion Sort dan Print Array
===========================================*/
int* ProsesSelectionSort(int arr[], int length)
{
    cout<<"Proses Selection Sort"<<endl;
    for(int i=0; i<length; i++)
    {
        FungsiTampil(arr,length);
        cout<<endl;

        int indexArray = i;
        for(int j = i; j < length; j++)
        {
            if(arr[indexArray] > arr[j])
            {
                indexArray = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[indexArray];
        arr[indexArray] = temp;
    }

    return arr;
}


