#include <iostream>

using namespace std;

void PrintValues(int iNumber, char cChar,float fNumber );
void PrintValuesByReference(int* iNumber, char* cChar,float* fNumber);
void PrintAddress(int* iPtr, char* cPtr,float* fPtr,int* iNumber, char* cChar,float* fNumber);



int main()
{
    int iNumber = 10;
    char cChar = 'A';
    float fNumber = 3.14;

    cout<<&iNumber<<endl;
    cout<<(void*)&cChar<<endl;
    cout<<&fNumber<<endl;

    cout<<endl;

    int* iPtr = &iNumber;
    char* cPtr = &cChar;
    float* fPtr = &fNumber;

    PrintValues(*iPtr,*cPtr,*fPtr);
    cout<<endl;
    PrintValuesByReference(iPtr,cPtr,fPtr);
    cout<<endl;
    PrintAddress(iPtr,cPtr,fPtr,&iNumber,&cChar,&fNumber);


    return 0;
}

void PrintValues(int iNumber, char cChar,float fNumber )
{
    cout<<iNumber<<endl;
    cout<<cChar<<endl;
    cout<<fNumber<<endl;
}

void PrintValuesByReference(int* iNumber, char* cChar,float* fNumber)
{
    cout<<*iNumber<<endl;
    cout<<*cChar<<endl;
    cout<<*fNumber<<endl;
}

void PrintAddress(int* iPtr, char* cPtr,float* fPtr,int* iNumber, char* cChar,float* fNumber)
{
    cout<<iPtr<<","<<&iNumber<<endl;
    cout<<(void*)cPtr<<","<<(void*)&cChar<<endl;
    cout<<fPtr<<","<<&fNumber<<endl;
}