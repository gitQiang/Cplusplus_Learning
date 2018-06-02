#include <string>
#include <iostream>
#include <cctype>

using namespace::std;

int main(){
    string s("hello world, is it right ????");
    for (auto c : s){
        cout << c << endl;
    }

    decltype(s.size()) punct_cnt = 0;

    for (auto c : s){
        if (ispunct(c)){
            ++punct_cnt;
        }
    }

    cout << punct_cnt << " punctuation characters in " << s << endl;

    return 0;
}
