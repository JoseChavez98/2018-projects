#include <iostream>
using namespace std;
int main() {
    int a=8;
    int *ptr=&a;
    int *ptr2;
    ptr2=&a;
    int **ptr3=&ptr2;

    cout<<&ptr<<'\n';
    cout<<**ptr3;
    return 0;
}