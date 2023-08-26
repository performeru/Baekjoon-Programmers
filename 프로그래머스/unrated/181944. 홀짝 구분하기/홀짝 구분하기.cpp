#include <iostream>
using namespace std;

void Cheak(int n)
{
   if(n%2==0)
   {
       cout << n << " is even" << endl;
   } 
    else if(n%2==1)
    {
        cout << n << " is odd" << endl;    
    } 
}

int main() 
{
    int n;
    
    cin >> n;
    
    Cheak(n);
}