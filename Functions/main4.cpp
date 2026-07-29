#include <iostream>
using namespace std;
int diff (int a , int b); // declaration 

int main(){
    int ans = diff(4,3);
    cout << ans; 

    return 0;
}

int diff (int a , int b){
    int difference = a-b;
    return difference;
}