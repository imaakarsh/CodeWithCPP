#include <iostream>
#include <vector> // to include header files to use
using namespace std;

int main()
{

    // creation
    vector<int> marks;
    // cout << *(marks.begin());   // pointing 1st element of vector
    // vector<int> miles(20);

    // cout << marks.max_size() << endl;
    marks.push_back(3);
    marks.push_back(4);
    marks.push_back(5);
    marks.push_back(5);
    marks.push_back(5);

    marks.insert(marks.begin(), 50);

    cout << *marks.begin() << endl;

    // cout << marks.capacity() << endl; // 8
    // cout << marks.size() << endl;     // 5

    // 5 ll be remove
    // marks.pop_back();

    // cout << "Size: " << marks.size() << endl;

    // vector<int> miles(14, 23);

    // cout << marks.front() << endl;

    // cout << marks.back() << endl;

    return 0;
}