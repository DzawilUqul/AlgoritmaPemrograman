#include <iostream>
#include <stdio.h>

using namespace std;

/*========================================
* Deklarasi Function FPB
==========================================*/
int FPB(int a, int b);
void FPB2(int a, int b);
void FPB3(int a, int b, int &fpb3);
void FPB4(int a, int b, int *fpb4);

/*========================================
* Deklarasi Function KPK
==========================================*/
int KPK(int a,int b);
int KPK2(int a,int b);
int KPK3(int a,int b);

int main()
{
    int a = 8;
    int b = 12;

    int fpb;
    int fpb3;
    int fpb4;

    int kpk;
    int kpk2;
    int kpk3;

    // FPB return int
    fpb = FPB(a,b);
    cout<<"FPB 1 : "<<fpb<<endl;

    // FPB void
    FPB2(a,b);

    // FPB void pass by reference
    FPB3(a,b, fpb3);

    // FPB void pass by pointer
    FPB4(a,b, &fpb4);



    //KPK with return FPB
    kpk = KPK(a,b);
    cout<<"kpk : "<<kpk<<endl;

    //KPK with void FPB pass by reference
    kpk2 = KPK2(a,b);
    cout<<"kpk2 : "<<kpk2<<endl;

    //KPK with void FPB pass by pointer
    kpk3 = KPK3(a,b);
    cout<<"kpk3 : "<<kpk3;

    return 0;
}

/*========================================
* Function FPB return Int
==========================================*/
int FPB(int a, int b)
{
    int r = 0;
    if(a>b)
    {
        while(b!=0)
        {
            r = a%b;
            a = b;
            b = r;
        }
        return a;
    }
    else
    {
        while(a!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
        return b;
    }
}


/*========================================
* Function FPB void
==========================================*/
void FPB2(int a, int b)
{
    int fpb2;
    int r = 0;
    if(a>b)
    {
        while(b!=0)
        {
            r = a%b;
            a = b;
            b = r;
        }
        fpb2 = a;
    }
    else
    {
        while(a!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
        fpb2 = b;
    }
    
    cout<<"FPB 2 : "<<fpb2<<endl;
}

/*========================================
* Function FPB void pass by reference
==========================================*/
void FPB3(int a, int b, int &fpb3)
{
    int r = 0;
    if(a>b)
    {
        while(b!=0)
        {
            r = a%b;
            a = b;
            b = r;
        }
        fpb3 = a;
    }
    else
    {
        while(a!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
        fpb3 = b;
    }
    cout<<"FPB 3 : "<<fpb3<<endl;
}


/*========================================
* Function FPB void pass by pointer
==========================================*/
void FPB4(int a, int b, int *fpb4)
{
    int r = 0;
    if(a>b)
    {
        while(b!=0)
        {
            r = a%b;
            a = b;
            b = r;
        }
        *fpb4 = a;
    }
    else
    {
        while(a!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
        *fpb4 = b;
    }
    cout<<"FPB 4 : "<<*fpb4<<endl;
}

/*========================================
* Function KPK with return FPB
==========================================*/
int KPK(int a,int b)
{
    return a*b/FPB(a,b);
}

/*========================================
* Function KPK with void FPB pass by reference
==========================================*/
int KPK2(int a,int b)
{
    int fpb;
    cout<<endl<<"Fungsi FPB3 di jalankan lagi"<<endl;
    FPB3(a,b,fpb);
    return a*b/fpb;
}

/*========================================
* Function KPK with void FPB pass by pointer
==========================================*/
int KPK3(int a,int b)
{
    int fpb;
    cout<<endl<<"Fungsi FPB4 di jalankan lagi"<<endl;
    FPB4(a,b,&fpb);
    return a*b/fpb;
}