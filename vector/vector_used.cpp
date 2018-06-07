#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main(){
    vector<int> v1{0,1,2,3,4,5,6,7,8,9};
    for (auto &i : v1){
        i *= i;
    }
    for (auto i : v1)
        cout << i << " ";
    cout << endl;


    // vector<int>::size_type
    vector<int> v;
    //v[0] error, index not used in null vector
    
    vector<unsigned> scores(11, 0);
    unsigned grade;
    cout << "input student grades from 0 to 100 " << endl; 
    while(cin >> grade){
        if (grade <= 100){
            ++scores[grade/10];
        }
    }

    for(auto i : scores){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
