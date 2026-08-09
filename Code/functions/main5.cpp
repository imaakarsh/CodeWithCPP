#include<iostream>
using namespace std;

int multi(int a , int b);
void name();

int main(){
    int into = multi(3,5);
    cout << into << endl;
    name();
    return 0 ;
}


int multi(int a , int b){
    int mul = a*b;
    return mul;
}

void name(){
    cout << "aakarsh" << endl;
}

