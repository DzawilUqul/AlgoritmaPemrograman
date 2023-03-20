#include <iostream>
#include <stdio.h>

using namespace std;
int FPB(int a, int b);
void FPB2(int a, int b);
void FPB3(int a, int b, int &fpb3);
void FPB4(int a, int b, int *fpb4);
int KPK(int a,int b);

int main()
{
    int a = 12;
    int b = 8;
    int fpb;
    int fpb3;
    int fpb4;

    int kpk;

    fpb = FPB(a,b);
    cout<<"FPB 1 : "<<fpb<<endl;
    FPB2(a,b);
    FPB3(a,b, fpb3);
    FPB4(a,b, &fpb4);

    //KPK
    kpk = KPK(a,b);
    cout<<"kpk : "<<kpk;

    return 0;
}

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
    }
    else
    {
        while(b!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
    }

    return a;
}



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
    }
    else
    {
        while(b!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
    }

    fpb2 = a;
    cout<<"FPB 2 : "<<fpb2<<endl;
}

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
    }
    else
    {
        while(b!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
    }

    fpb3 = a;
    cout<<"FPB 3 : "<<fpb3<<endl;
}

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
    }
    else
    {
        while(b!=0)
        {
            r = b%a;
            b = a;
            a = r;
        }
    }

    *fpb4 = a;
    cout<<"FPB 4 : "<<*fpb4<<endl;
}

int KPK(int a,int b)
{
    return a*b/FPB(a,b);
}
