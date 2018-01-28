#include <iostream>

using namespace std;

int * clone_array(int a[], int n)
{
    int * b = NULL; // int ptr to null
    b = new int[n];
    int i;

    for(i=0; i<n; i++) {
        b[i] = a[i];
    }
    return b; // return address
}

int main()
{
    int arr[10];
    int * arr2;
    for (int i =0; i<10; ++i )
    {
        arr[i]=i;
    }
    arr2=clone_array(arr, 10);
    for (int i =0; i<10; ++i )
    {
        cout << arr2[i] <<'\n';
    }
    return 0;
}