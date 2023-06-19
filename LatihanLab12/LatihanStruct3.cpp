#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cmath>

using namespace std;

struct Point
{
    private :
    float x_tengah;
    float y_tengah;

    public :
    void HitungTitikTengah(float x1,float x2,float y1,float y2)
    {
        x_tengah = (x1 + x2) / 2;
        y_tengah = (y1 + y2) / 2;

        cout<<"Koordinat titik tengah : ("<<x_tengah<<","<<y_tengah<<")"<<endl;
    }

    float JarakDuaTitik(float x1,float x2,float y1,float y2)
    {
        return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    }
};

int main()
{
    Point point;
    float x1;
    float y1;

    float x2;
    float y2;

    float jarak;

    cout<<"Masukkan koordinat titik pertama : ="<<endl;
    cout<<"x : ";
    cin>>x1;
    cout<<"y : ";
    cin>>y1;

    cout<<"Masukkan koordinat titik kedua : "<<endl;
    cout<<"x : ";
    cin>>x2;
    cout<<"y : ";
    cin>>y2;

    point.HitungTitikTengah(x1,x2,y1,y2);
    jarak = point.JarakDuaTitik(x1,x2,y1,y2);
    cout<<"Jarak antara dua titik : "<<jarak;

    return 0;
}