
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int x;
    cout<<"Enter the value of x";
    cin>>x;
    int sign=-1;
    float sum=1;
    for(float i=1;i<=n;i++){
        sum =sign*(sum+(x*i/fact(i)));
        sign=sign*-1;
    }
    cout<<sum;

    return 0;
}