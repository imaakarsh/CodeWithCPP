#include <iostream>
using namespace std;
int sum(int a , int b);


int main(){
 
    int ans  = sum(5,3);
    cout << ans << endl;
    return 0;
}

int sum(int a, int b){
    int total = a+b;
    return total;
    
}