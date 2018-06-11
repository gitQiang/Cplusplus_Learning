#include <iostream>
#include <string>
#include <vector>

using namespace::std; 

int main(){
    vector<string> text{"a","b","c","d","e","f","g","h","i","j","k","l","m","n"};
    string sought("i"); 
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + ( end - beg )/2;
    int k=0;
    while (mid!=end && *mid!=sought){
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        k += 1;
        mid = beg + (end - beg)/2;
    }
    cout << k << "  " << *mid << endl;

    return 0;
} 
