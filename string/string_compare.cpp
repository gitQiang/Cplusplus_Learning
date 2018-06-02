#include <string>
#include <iostream>

using namespace::std;

int main(){
    string s1="hello world";
    string s2="hello world";
    if (s1 == s2){
        cout << "s1 is the same with s2" << endl;
    }else{
        cout << "s1 is not the same with s2" << endl;
    }
    string s3 = s1 + s2;
    string s4 = s1 + ", ";
    //string s5 = "hello" + ","; # error 
    string s6 = s1 + "," + "world";
    //string s7 = "hello" + "," + s2; // error 
    string s8 = "hello" + s2;
    cout << "s3 is " << s3 << endl;
    cout << "s4 is " << s4 << endl;
    //cout << "s5 is " << s5 << endl;
    cout << "s6 is " << s6 << endl;
    //cout << "s7 is " << s7 << endl;
    cout << "s8 is " << s8 << endl;
    // string add up from left to right with at least one string object
    // notes in page 81
        
    return 0; 
}
