#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
void FungsiDetik(int input);
void FungsiBMI(float bb, float tinggi);
void DecimalToBinary(int input);
void BinaryToDecimal(int biner);

int main()
{
    // 1. Konversi detik
    int input = 4022;
    FungsiDetik(input);

    // 2. Menghitung BMI
    // BMI = bb/(t)^2
    cout<<endl;
    float bb = 80;
    float tinggi = 1.8;
    FungsiBMI(bb, tinggi);  
    


    // 3. Konversi bilangan ke biner
    cout<<endl;
    int bilangan = 100;
    DecimalToBinary(bilangan);

    // 4. Konversi biner ke desimal
    int biner = 1100100;
    BinaryToDecimal(biner);

    
    

    return 0;
}

void BinaryToDecimal(int biner)
{
    int temp = 0;
    int dec = 0;
    int i=0;

    while(biner > 0)
    {

        temp = biner%10;
        biner = biner/10;
        dec = dec+(temp*pow(2,i));
        i++;
    }
    cout<<"binary to decimal (1100100) : "<<dec<<endl;
}

void FungsiDetik(int input)
{
    int detik;
    int sisaDetik;
    int menit;
    int jam;
    
    jam = input / 3600;
    sisaDetik = input % 3600;
    menit = sisaDetik/60;
    detik = sisaDetik % 60;

    cout<<"Jam : "<<jam<<endl;
    cout<<"Menit : "<<menit<<endl;
    cout<<"detik : "<<detik<<endl;
}

void FungsiBMI(float bb, float tinggi)
{
    float bmi;

    bmi = bb/pow(tinggi,2);
    cout<<"BMI : "<<bmi;
}

void DecimalToBinary(int input)
{
    int arr[8];
    for(int i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        if(input%2 == 0)
        {
            input = input/2;
            arr[i] = 0;
        } else 
        {
            input = input/2;
            arr[i] = 1;
        }
    }

    cout<<endl<<"decimal to binary (100) : ";
    for(int i = sizeof(arr)/sizeof(int) -1; i>=0; i-- )
    {
        cout<<arr[i];
    }

    cout<<endl;
}