#include <iostream>
using namespace std;

void FungsiPecah(int* arr,int length, int& jumlahGenap, int& jumlahGanjil, int arrGenap[], int arrGanjil[]);
void FungsiTampil(int arr[], int length);
int* AscendingBubbleSort(int arr[], int length);
int* DescendingBubbleSort(int arr[], int length);
int* FungsiGabung(int arrGanjil[],int arrGenap[], int lengthGenap, int lengthGanjil);

int main()
{
    // pecah, gabung , ascending, descending
    int arr[] = {1,7,8,3,2,5,9,7,6,2,1};
    int length = sizeof(arr)/sizeof(int);

    int* arrHasil = (int*) malloc(length * sizeof(int));

    int arrGenap[length];
    int arrGanjil[length];


    int jumlahGanjil = 0;
    int jumlahGenap = 0;

    FungsiPecah(arr,length, jumlahGenap, jumlahGanjil, arrGenap, arrGanjil);
    int* arrGenapHasil;
    int* arrGanjilHasil;

    FungsiTampil(arrGenap,jumlahGenap);
    cout<<endl;
    FungsiTampil(arrGanjil,jumlahGanjil);

    arrGenapHasil = DescendingBubbleSort(arrGenap,jumlahGenap);
    arrGanjilHasil = AscendingBubbleSort(arrGanjil,jumlahGanjil);

    cout<<"\n\n"<<"After Sorting"<<endl<<endl;

    FungsiTampil(arrGenap,jumlahGenap);
    cout<<endl;
    FungsiTampil(arrGanjil,jumlahGanjil);

    cout<<"\n\n"<<"Combined Array"<<endl<<endl;
    arrHasil = FungsiGabung(arrGanjil, arrGenap, jumlahGenap, jumlahGanjil);
    FungsiTampil(arrHasil,length);


    return 0;
}

void FungsiPecah(int* arr,int length, int& jumlahGenap, int& jumlahGanjil, int arrGenap[], int arrGanjil[])
{
    for(int i=0; i<length; i++)
    {
        if(arr[i] %2 == 0)
        {
            arrGenap[jumlahGenap] = arr[i];
            jumlahGenap ++;
        } 
        else
        {
            arrGanjil[jumlahGanjil] = arr[i];
            jumlahGanjil ++;
        }
    }
}

void FungsiTampil(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int* AscendingBubbleSort(int arr[], int length)
{
    bool swap = false;

    while(swap == false)
    {
        swap = true;
        for(int i=0; i<length-1 ; i++ )
        {
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

int* DescendingBubbleSort(int arr[], int length)
{
    bool swap = false;

    while(swap == false)
    {
        swap = true;
        for(int i=0; i<length-1 ; i++ )
        {
            if(arr[i] < arr[i+1])
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

int* FungsiGabung(int arrGanjil[],int arrGenap[], int lengthGenap, int lengthGanjil)
{
    int totalLength = lengthGanjil + lengthGenap;
    int* arr = (int*) malloc(totalLength * sizeof(int));

    int ganjilCounter = 0;
    int genapCounter = 0;
    int i=0;
    

    while(i < totalLength)
    {
        if(ganjilCounter < lengthGanjil)
        {
            arr[i] = arrGanjil[ganjilCounter];
            ganjilCounter++;
            i++;
        }
        
        if(genapCounter < lengthGenap)
        {
            arr[i] = arrGenap[genapCounter];
            genapCounter++;
            i++;
        }
    }

    return arr;
}