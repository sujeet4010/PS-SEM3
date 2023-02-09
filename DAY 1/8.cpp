#include<iostream>
using namespace std;

int 
main () 
{

  int x, y;
  cout << "Enter the value for variable x and y : ";
  
cin >> x >> y;
if (x > 0 && y > 0)
  cout << "lies in the First quadrant"<<endl;
else if (x < 0 && y > 0)
  cout << "lies in the Second quadrant"<<endl;
else if (x < 0 && y < 0)
  cout << "lies in the Third quadrant"<<endl;
else if (x > 0 && y < 0)
  cout << "lies in the Fourth quandrant"<<endl;
else if (x == 0 && y == 0)
  cout << "at origin"<<endl;
else if (y == 0 && x != 0)
  cout << "on x-axix"<<endl;
else if (x == 0 && y != 0)
  cout << "on at y-axix"<<endl;
  
return 0;
}