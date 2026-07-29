#include <iostream>
using namespace std;
int main()
{
    // int n, i;
    // // C
    // for (i = 1; i <= 5; i++){
    //     if (i == 4){
    //         continue;
    //     }

    // cout << i << endl;
    // }
    

    // while loop 
    int i=1 ,n;
    cout << "Enter The N:" << endl;
    cin >> n ;
    while(i<=n){
        if(i==5){
            i++;
            continue;
        }
        cout << i ;
        i = i+1;
    }

    return 0;
}