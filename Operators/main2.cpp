#include <iostream>
using namespace std;

int main() 
{
    bool cond1 = true;
    bool cond2 = false;
    bool cond3 = false;

    if(cond1 || cond2 || cond3){
        cout << "all are true" << endl;
    }
    else{
        cout << "not true" << endl;
    }
    return 0;
}