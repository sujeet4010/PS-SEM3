
#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout<<"Enter Temperature in Celsius";
    cin>>temp;
    
    if(temp<0) cout<<"Freezing Weather";
    else if(temp<10 && temp>0) cout<<"Very Cold Weather";
    else if(temp<20 && temp>10) cout<<"Cold Weather";
    else if(temp<30 && temp>20) cout<<"Normal in Temperature";
    else if(temp<40 && temp>30) cout<<"Its Hot";
    else if(temp>=40) cout<<"Very Hot";
    
    return 0;
}