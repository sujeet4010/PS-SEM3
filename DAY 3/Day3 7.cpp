
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number of terms";
    cin>>n;
    int sign=1;
    float sum=0;
    float i=1;
    int j=1;
    while(i<=n){
        sum =sum+sign*(i/fact(j));
        j=j+2;
        i++;
        sign=sign*(-1);
    }
    cout<<sum;

    return 0;
}