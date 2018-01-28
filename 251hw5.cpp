#include <iostream>

using namespace std;

void foo(unsigned int n) {

    cout << "tick" << endl;
    if(n > 0) {
        foo(n-1);
        foo(n-1);
    }
}  

int main()
{
    foo(0);
}