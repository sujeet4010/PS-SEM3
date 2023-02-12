
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
    int x;
    cout<<"Enter the value of x";
    cin>>x;
    int sign=1;
    float sum=0;
    float i=1;
    int j=1;
    while(j<=n){
        sum =sum+sign*((x*i/fact(i)));
        i=i+2;
        sign=sign*(-1);
        j++;
    }
    cout<<sum;

    return 0;
}