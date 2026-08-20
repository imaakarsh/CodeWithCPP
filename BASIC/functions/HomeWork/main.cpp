#include<iostream>
using namespace std;

void printCounting();
int simpleIntrest(int p , int r, int t);
void PrimeMumber();


int main(){
    // printCounting();
    float  simpleIntrestAns = simpleIntrest(22,3,5);
    cout << simpleIntrestAns ;
    return 0 ;
}

void printCounting(){
    for(int i = 1; i<+100; i++){
        cout << i << endl;
    }
}

int simpleIntrest(int p , int r, int t){
   float si = (p*r*t)/100;
   return si;

}

