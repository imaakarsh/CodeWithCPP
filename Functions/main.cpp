#include<iostream>
using namespace std;
int name(int n);

int main(){
    int n ;
    cout<< " enter the n:";
    cin >> n ;
   name(n);

   return 0;
}


int name(int n){
    // int i,n;
    // cout<< " enter the n:";
    // cin >> n ;
    for(int i=0;i<=n;i++){
       cout << i << endl; 
    }
}