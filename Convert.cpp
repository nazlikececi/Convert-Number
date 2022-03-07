#include <iostream>
#include<math.h>

using namespace std;

void print(int temp[],int size);

int main(int argc,char* argv[])
{
    int dNumber,system;
	cout<<"Enter the number you want to convert: ";
	cin>>dNumber;
	cout<<"Type the base you want to convert: ";
	cin>>system;

    int ndigits=1;

    while(dNumber>pow(system,ndigits))
        ndigits++;

    int SIZE=0;

    int newNumber[ndigits]={0};

    while(SIZE<ndigits){ 
        int temp=dNumber%system;
        newNumber[SIZE]=temp;
        dNumber=dNumber/system;
        SIZE++;
    }
    cout<<"("<<dNumber<<")_(10)=(";
    print(newNumber,SIZE);
    cout<<")_("<<system<<")"<<endl;
    return 0;
}

void print(int ar[],int SIZE){
    for(int i=SIZE-1;i>=0;i--){
        cout<< ar[i];
    }
}
