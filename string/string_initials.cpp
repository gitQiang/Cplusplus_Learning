#include <string>
#include <iostream>

//using namespace::std;
using std::string;
using std::cout;
using std::endl;

int main(){
	
    string s1;
	string s2 = s1;
	string s3 = "hello world";
	string s4("value");
	string s5(10, 'c');

	cout << "string s1 is " << s1 << endl;
	cout << "string s2 is " << s2 << endl;
	cout << "string s3 is " << s3 << endl;
	cout << "string s4 is " << s4 << endl;
	cout << "string s5 is " << s5 << endl;

	return 0;
}

