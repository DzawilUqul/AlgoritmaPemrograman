#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct HitungBangunDatar
{
    double panjang;
    double lebar;
    double r;
    double t;

    double LuasPersegiPanjang()
    {
        return panjang * lebar;
    }

    double LuasLingkaran()
    {
        return 22/7 * r * r;
    }

    double VolumeKerucut()
    {
        double hasil;
        hasil =  r * r * t * 1/3 * 22/7;
        return hasil;
    }

    double VolumeBola()
    {
        return 4/3 * 22/7 * r * r * r;
    }
};

int main()
{
    HitungBangunDatar hitungBangunDatar;
    hitungBangunDatar.panjang = 5;
    hitungBangunDatar.lebar = 3;
    hitungBangunDatar.r = 7;
    hitungBangunDatar.t = 10;

    cout<<hitungBangunDatar.LuasPersegiPanjang()<<endl;
    cout<<hitungBangunDatar.LuasLingkaran()<<endl;
    cout<<hitungBangunDatar.VolumeKerucut()<<endl;
    cout<<hitungBangunDatar.VolumeBola()<<endl;
    return 0;
}