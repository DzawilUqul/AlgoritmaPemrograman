#include <iostream>
using namespace std;
int* BubbleSortAscending(int arr[], int length);
int* BubbleSortDescending(int arr[], int length);
void FungsiTampilDesc(int arr[], int length);
void FungsiTampilAsc(int arr[], int length);
void FungsiTampil(int arr[], int length);

int InputSelectionLength();
int* InputSelectionArr(int arr[], int length);
int* SelectionSortAsc(int arr[], int length);


int main()
{
    int arr[] = {3,2,5,4,1,6,4,7,5};
    int length = sizeof(arr)/sizeof(int);

    int* arrHasil = BubbleSortAscending(arr,length);
    FungsiTampilAsc(arrHasil,length);

    int* arrHasilDesc = BubbleSortDescending(arr,length);
    FungsiTampilDesc(arrHasilDesc,length);

    // int selectionLength = InputSelectionLength();
    // int* arrSelection = (int*) malloc(selectionLength * sizeof(int));

    // arrSelection = InputSelectionArr(arrSelection, selectionLength);
    // arrSelection = SelectionSortAsc(arrSelection, selectionLength);
    // FungsiTampilAsc(arrSelection, selectionLength);
    


    

    return 0;
}

// 1 2 3 4 5 6 
// 2 1 3 4 5 6
int* BubbleSortAscending(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr;
}

// 6 5 4 3 2 1 
// 5 6 4 3 2 1
int* BubbleSortDescending(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length-1; j++)
        {
            if(arr[j+1] > arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }


    return arr;
}

void FungsiTampilAsc(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<"I";
        }

        for(int k=0; k<length-arr[i]; k++ )
        {
            cout<<".";
        }
        cout<<arr[i]<<endl;

    }
    cout<<endl;
}

void FungsiTampil(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

void FungsiTampilDesc(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<"I";
        }

        for(int k=0; k<length - arr[i]; k++)
        {
            cout<<".";
        }
        cout<<arr[i]<<endl;

    }
    cout<<endl;
}

int InputSelectionLength()
{
    int data;
    cout<<"Masukkan panjang data = ";
    cin>>data;
    return data;
}

int* InputSelectionArr(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<"Masukkan data ke-"<<i+1<<" = ";
        cin>>arr[i];
    }

    return arr;
}
// 1 2 3 4 5 
// 2 3 1 4 5 
int* SelectionSortAsc(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        int indexArray = i;
        for(int j=i; j<length; j++)
        {
            if(arr[indexArray] > arr[j])
            {
                indexArray = j;
            }

        }

        int temp = arr[i];
        arr[i] = arr[indexArray];
        arr[indexArray] = temp;
    }
    return arr;
}

