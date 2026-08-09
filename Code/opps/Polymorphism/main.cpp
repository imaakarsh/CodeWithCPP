#include <iostream>
using namespace std;

// class add{
//      public:
//      // two int
//      int sum(int x,int y){
//         cout << "Sum Of two int : " << endl;
//         return x+y;
//      }
//      // three int addition
//      int sum(int x, int y , int z){
//          cout << "Sum Of three int : " << endl;
//         return x+y+z;
//      }
//         // double addition
//       double sum(double x, double y){
//         return x+y;
//      }
// };

class complex
{
public:
    int real;
    int imag;

    complex()
    {
        real = imag = -1;
    }

    complex(int r, int i) : real(r), imag(i) {

                            };

    void print()
    {
        printf("[%d + i%d]\n", this->real, this->imag);
    }
};
int main()
{

    complex A(2, 5);
    A.print();
    complex B(3, 4);

    complex c = A + B;

    //  int x=5;
    //  int y = 4;
    //  int z = 3;

    //  add Add;
    //  cout << Add.sum(x,y) << endl;
    //  cout << Add.sum(x,y,z) << endl;

    return 0;
}