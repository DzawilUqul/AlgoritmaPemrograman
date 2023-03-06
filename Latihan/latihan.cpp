#include <iostream>
#include <string>
using namespace std;

void TakeDmg();
void AddHealth(int nyawa);

int main()
{
    // Sizeof
    int arr[] = {1,2,3,4};
    int arr2d[2][3] = {{11,22,33},{44,55,66}};

    cout<<"arr lenght : "<<sizeof(arr)/sizeof(int)<<"\n";
    cout<<"arr2d lenght : "<<sizeof(arr2d)/sizeof(int)<<"\n";
    cout<<"arr2d row lenght : "<<sizeof(arr2d)/sizeof(arr2d[3])<<"\n";
    cout<<"arr2d coloumn lenght : "<<sizeof(arr2d[2])/sizeof(arr2d[2][3])<<"\n";

    // Structure
    struct
    {
        string name;
        int health;
        int damage;
    } myStruct;

    myStruct.damage = 5;
    cout<<myStruct.damage<<"\n";

    // One structure multiple variables
    struct
    {
        string name;
        int health;
        int damage;

    } myStruct1,myStruct2,myStruct3;

    myStruct1.name = "Megatron";
    myStruct2.name = "Optimus";
    myStruct3.name = "Bumblebee";

    cout<<myStruct1.name<<"\n";
    cout<<myStruct2.name<<"\n";
    cout<<myStruct3.name<<"\n";

    // Named Structures
    struct latihan
    {
        int health;
    };

    latihan myLatihan;
    myLatihan.health = 100;
    cout<<myLatihan.health<<"\n";

    // Reference
    int healthOpt = 10;
    int &damageOpt = healthOpt;

    cout<<healthOpt<<"\n";
    cout<<damageOpt<<"\n";
    
    // Function
    TakeDmg();

    // Function with parameter
    AddHealth(100);

    




}

void TakeDmg()
{
    int damage = 50;
    cout<<"damage : "<<damage<<"\n";
}

void AddHealth(int nyawa)
{
    cout<<nyawa<<"\n";
}

