#include <iostream>
using namespace std;

int main() {
    int a[5]={-3,-2,0,4,5};

    for(int i=0;i<5;i++)
        if(a[i]>0) {
            cout<<a[i];
            break;
        }
}
