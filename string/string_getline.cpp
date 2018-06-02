#include <iostream>
#include <string>

using namespace::std;

int main(){
    string line;
    getline(cin, line);
    cout << line << endl;

    cout << line.empty() << endl;
    cout << line.size() << endl; //unsigned type
    //int n=-10;
    //cout << line.size() < n << endl;// error !!!!!
    if (line.size() > 10){
        cout << "line size is larger than 10" << endl;
    } 
    return 0;
}
