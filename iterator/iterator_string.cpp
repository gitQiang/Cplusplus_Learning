#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main(){
    string s("some sthing");
    cout << "initial s is " << s << endl;
    if (s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    for (auto it = s.begin(); it!=s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    cout << s << endl;

    // (*it).empty();
    // *it.empty(); error
    // it->mem    ====    (*it).mem
    vector<string> text{"I", "am", "a", "small", "tree"};
    for (auto it = text.cbegin(); it!=text.cend() && !it->empty(); ++it)
        cout << *it << "    ";
    cout << endl;

    return 0;
}
