#include <iostream>

using namespace std;

void fubar(unsigned int n) {
int i, j;

  for(i=0; i<n; i++){
    cout <<"tick!" << endl;
  }
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
        cout <<"tick$" << endl;
    }
  }
}

int main()
{
    fubar(3);
    return 0;
}
