#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main(){
    vector<int> v2;
    for (int i=0; i!=100; i++)
        v2.push_back(i);
    
    cout << "input string vector elements" << endl;
    string word;
    vector<string> text;
    while(cin >> word){
        text.push_back(word);
    }
    
    cout << "vector text size is " << text.size() << endl;
    cout << "the 4 element in v2 is " << v2[3] << endl;

    return 0;
}
