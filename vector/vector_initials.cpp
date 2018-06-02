#include <iostream>
#include <vector>
#include <string>

//using std::vector;
using namespace::std;

int main(){
    vector<int> ivec;
    vector<int> ivec2(ivec);
    vector<int> ivec3 = ivec;
    //vector<string> svec(ivec2); error
    
    vector<string> articles = {"a", "an", "the"};
    vector<string> v1{"a", "an", "the"};
    //vector<string> v1("a", "an", "the"); error
    
    vector<int> ivec4(10, -1);
    vector<string> svec(10, "hi");

    vector<int> ivec5(10);
    vector<int> ivec6(10, 1);
    cout << "ivec5 values are " << endl;
    for (auto c : ivec5)
        cout << c << " ";
    cout << endl;

    cout << "ivec6 values are " << endl;
    for (auto c : ivec6)
        cout << c << " ";
    cout << endl;

    vector<string> v7{10};
    vector<string> v8{10, "hi"};

    cout << "v7 values are " << endl;
    for (auto c : v7)
        cout << c << " ";
    cout << endl;

    cout << "v8 values are " << endl;
    for (auto c : v8)
        cout << c << " ";
    cout << endl;


    return 0;
}
