#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

int jumlah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(float a, float b);

int main()
{
    // // char strcpy
    // char tujuan[50];

    // strcpy(tujuan,"test");
    // printf("%s", tujuan);

    // // strlen

    // // strcat
    // char a[50], b[50];
    // strcpy(a,"udinus");
    // strcpy(b,"semarang");
    
    // strcat(a,b);
    // strupr(a);

    // printf(a);

    // cout<<"\n\n\n";

    // char nama[50];
    // char namaBelakang[50];
    // cout<<"nama : ";
    // cin>>nama;
    // cout<<"nama belakang : ";
    // cin>>namaBelakang;

    // int panjang = strlen(nama);
    // int panjangBelakang = strlen(namaBelakang);
    // cout<<"nama depan : "<<nama<<", panjang char : "<<panjang<<"\n";
    // cout<<"nama belakang : "<<namaBelakang<<", panjang char : "<<panjangBelakang;

    // strcat(nama,namaBelakang);
    // cout<<"\nstrcat : "<<nama;

    // string staring= strupr(nama);
    // cout<<"\nuppercase : "<<nama;

    // // islower
    // char x = 'a';
    // cout<<"nama islower"<<islower(x)<<"\n";
    // cout<<"nama islower"<<isupper(x)<<"\n";
    // cout<<"nama islower"<<isdigit(x)<<"\n";

    // // latihan =================================================
    // char y[1];
    // cout<<"masukkan char : ";
    // cin>>y;

    // if(islower(y[0]) == 0)
    // {
    //     strlwr(y);
    //     cout<<y;
    // } else
    // {
    //     strupr(y);
    //     cout<<y;
    // }

    // // math function
    // int x;
    // int y;

    // cout<<"masukkan angka x : ";
    // cin>>x;
    // cout<<"masukkan angka y : ";
    // cin>>y;


    // cout<<"akar dari "<<x<<" : "<<sqrt(x)<<"\n";
    // cout<<"kuadrat dari "<<y<<" : "<<pow(y,y)<<"\n";

    // Latihan Function
    int a,b,c,d,f;

    float e;

    cout<<"masukkan int angka : \n";
    cin>>a;
    cin>>b;

    c = jumlah(a,b);
    d = kurang(a,b);
    f = kali(a,b);
    e = bagi(a,b);
    cout<<"jumlah : "<<c;
    cout<<"\nkurang : "<<d;
    cout<<"\nkali : "<<f;
    cout<<"\nbagi : "<<e;




    return 0;
}

int jumlah(int x, int y)
{
    return x+y;
}

int kurang(int x, int y)
{
    return x-y;
}

int kali(int x, int y)
{
    return x*y;
}

float bagi(float x, float y)
{
    return x/y;
}