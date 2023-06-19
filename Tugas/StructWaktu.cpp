#include <iostream>

using namespace std;

//global variabel
struct waktu
{//waktu menjadi sebuat tipe data terdefinisi
    private : 
    int jam;
    int menit;
    int detik;

    public :

    void setJam(int jam)
    {
        this->jam = jam;
    }

    void setMenit(int menit)
    {
        this->menit = menit;
    }

    void setDetik(int detik)
    {
        this->detik = detik;
    }

    int getJam()
    {
        return jam;
    }

    int getMenit()
    {
        return menit;
    }

    int getDetik()
    {
        return detik;
    }
};

//gimana cara mendapatkan jam kerja?
waktu hitungJamKerja(waktu datang, waktu pulang)
{
    waktu kerja;//var lokal

     if (datang.getJam() < pulang.getJam()) 
     {
        if (datang.getDetik() > pulang.getDetik()) 
        {
            kerja.setDetik(60 + pulang.getDetik() - datang.getDetik());
            pulang.setMenit(pulang.getMenit() - 1);
        } 
        else 
        {
            kerja.setDetik(pulang.getDetik() - datang.getDetik());
        }

        if (datang.getMenit() > pulang.getMenit()) 
        {
            kerja.setMenit(60 + pulang.getMenit() - datang.getMenit());
            pulang.setJam(pulang.getJam() - 1);
        } 
        else 
        {
            kerja.setMenit(pulang.getMenit() - datang.getMenit());
        }

        kerja.setJam(pulang.getJam() - datang.getJam());
    }
    return kerja;
}

int main()
{
    waktu datang, pulang, kerja;//waktu kerja = pulang-datang
    int jamDatang, menitDatang, detikDatang;
    cout << "Masukan jam datang : "; cin >> jamDatang;
    cout << "Masukan menit datang : "; cin >> menitDatang;
    cout << "Masukan detik datang : "; cin >> detikDatang;

    datang.setJam(jamDatang);
    datang.setMenit(menitDatang);
    datang.setDetik(detikDatang);

    int jamPulang, menitPulang, detikPulang;
    cout << "Masukan jam pulang : "; cin >> jamPulang;
    cout << "Masukan menit pulang : "; cin >> menitPulang;
    cout << "Masukan detik pulang : "; cin >> detikPulang;
    
    pulang.setJam(jamPulang);
    pulang.setMenit(menitPulang);
    pulang.setDetik(detikPulang);

    kerja=hitungJamKerja(datang,pulang);
    cout << "Lama kerja : "<< kerja.getJam()<<":"<<kerja.getMenit()<<":"<<kerja.getDetik()<<endl;
    return 0;
}

