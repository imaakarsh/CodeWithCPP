#include<iostream>
using namespace std;

int main(){
    //dyanamic memeory
    int *ptr = new int;
    cout << *ptr ;

    // ab mereko need nhi h iss int ki
    delete ptr;

    return 0;
}