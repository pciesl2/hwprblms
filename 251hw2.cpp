#include <iostream>

using namespace std;

unsigned int square(unsigned int n) 
{
    if(n == 0)
    {
        return n;
    }
    else
    {
        cout << '#' << '\n';
        return n+square(n-1)+n-1;
    }
    
    
}

int main()  
{
    unsigned int n = 3;
    cout << square(n)<< '\n';
}
