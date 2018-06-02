#include <string>
#include <iostream>
#include <cctype>

using namespace::std;

int main(){
    string s("some string");
    if (!s.empty())
        s[0] = toupper(s[0]);
    cout << s << endl;


    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); index++){
            s[index] = toupper(s[index]);
            }
    cout << s << endl;


    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15" << " seperated by spaces. Hit ENTER when finished!" << endl;
    string result;
    string::size_type n;
    while(cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];

    cout << "Your hex number is: " << result << endl;        

    return 0;
}
