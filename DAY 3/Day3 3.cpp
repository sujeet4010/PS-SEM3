
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
    
    float sum=1;
    for(float i=1;i<=n;i++){
        sum =sum+x*i/fact(i);
    }
    cout<<sum;

    return 0;
}