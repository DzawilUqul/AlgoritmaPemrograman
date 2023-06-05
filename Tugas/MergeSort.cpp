#include <iostream>

using namespace std;

// Function declarations
int InputDataLength();
int* InputDataArr(int*, int);
int* FungsiPisahMergeSort(int*, int);
int* FungsiGabung(int*, int, int*, int);
void BinarySearch(int*,int, int);
void FungsiTampil(int*, int);

int main() 
{
    int counter;
    bool isInputted = false;
    bool isSorted = false;

    while (counter != 4)
    {
        cout<<"\n=== Program Sederhana ==="<<endl;
        cout<<"1. Input Array"<<endl;
        cout<<"2. Urutkan Array"<<endl;
        cout<<"3. Cari Elemen"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"\nMasukkan Perintah (1/2/3/4) : ";
        cin>>counter;

        switch (counter)
        {
            int length; 
            int* arr;
            int* sortedArray;

            case 1:
            {
                // Reset isSorted ke false apabila case 1 dijalankan kembali
                if(isSorted)
                {
                    isSorted = false;
                }

                // Input panjang array
                cout<<"Masukkan panjang array = ";
                length = InputDataLength();

                // Alokasi memory untuk menampung array sejumlah length
                arr = new int[length];
                arr = InputDataArr(arr,length);
                
                // Print array sebelum sorting
                cout << "\n=== SEBELUM SORTING ===" << endl;
                FungsiTampil(arr,length);

                isInputted = true;
            } break;
            
            case 2:
            {
                // cek apakah array sudah diinput
                if(isInputted)
                {
                    // Proses merge sort dengan memisah array menjadi 2
                    sortedArray = FungsiPisahMergeSort(arr, length);

                    // Print array sesudah sorting
                    cout << "\n=== SESUDAH SORTING ===" << endl;
                    FungsiTampil(sortedArray,length);
                    
                    isSorted = true;
                }
                else
                {
                    cout<<"Array harus di input dahulu"<<endl;
                }
            } break;

            case 3:
            {
                // Cek apakah data sudah diinput dan disorting
                if(isInputted && isSorted)
                {
                    // Searching menggunakan binary search
                    int cari;
                    cout<<"Masukkan data yang dicari = ";
                    cin>>cari;
                    BinarySearch(sortedArray, length, cari);
                }
                else
                {
                    cout<<"Array harus diinput dan disorting dahulu"<<endl;
                }
            } break;
        }
    }
    
    return 0;
}

int InputDataLength()
{
    int length;
    cin >> length;
    return length;
}

int* InputDataArr(int* arr, int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<"Masukkan data ke "<<i+1<<" = ";
        cin>>arr[i];
    }
    return arr;
}

void BinarySearch(int* arr, int length, int key)
{
    int left = 0, right = length - 1, mid = 0;
    int index = -1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (index != -1)
    {
        cout << "Data ditemukan di urutan ke-" << index + 1 << "." << endl;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }
}

int* FungsiPisahMergeSort(int* numbers, int size)
{
    // Jika data sudah berisi 1 data, maka return
    if (size <= 1) 
    {
        return numbers;
    }

    // Mencari nilai tengah
    int mid = size / 2;

    // Pecah array menjadi 2 menggunakan pointer untuk mencari index acuan pertama
    int* left = numbers;
    int leftSize = mid;

    int* right = numbers + mid;
    int rightSize = size - mid;

    // Pemanggilan rekursif untuk memisah array
    int* sortedLeft = FungsiPisahMergeSort(left, leftSize);
    int* sortedRight = FungsiPisahMergeSort(right, rightSize);

    // return hasil dari FungsiGabung
    int* hasilGabung = FungsiGabung(sortedLeft, leftSize, sortedRight, rightSize);

    return hasilGabung;
}

// Sorting 2 array lalu digabung dengan mengalokasikan memori sejumlah length dahulu
int* FungsiGabung(int* left, int leftSize, int* right, int rightSize) 
{
    // Alokasi memory sejumlah panjang kedua array
    int* hasilGabung = new int[leftSize + rightSize];
    // index array kiri, kanan, dan hasilGabung
    int i = 0, j = 0, k = 0;

    // Cek apakah elemen array kiri dan elemen array kanan masih terdapat elemen yg tersisa
    while (i < leftSize && j < rightSize) 
    {
        if (left[i] < right[j]) 
        {
            hasilGabung[k] = left[i];
            i++;
        } 
        else 
        {
            hasilGabung[k] = right[j];
            j++;
        }
        k++;
    }

    // Apabila tersisa elemen array kiri
    while (i < leftSize) 
    {
        hasilGabung[k] = left[i];
        i++;
        k++;
    }

    // Apabila tersisa elemen array kanan
    while (j < rightSize) 
    {
        hasilGabung[k] = right[j];
        j++;
        k++;
    }

    return hasilGabung;
}

void FungsiTampil(int* arr, int length)
{
    for (int i = 0; i < length; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}