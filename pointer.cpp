#include <iostream>
using namespace std;
int main (){
    int a = 4;
    int *ptr;
   ptr = &a;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    return 0;
}