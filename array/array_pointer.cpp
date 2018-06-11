#include <iostream>
#include <string>

using namespace::std;

int main(){
    string nums[] = {"one", "two", "three"};
    string *p1 = &nums[0];
    string *p2 = nums; //equals to p2 = &nums[0]
    
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    auto ia2(ia); // equals to int *ia2 = &ia[0];
    auto ia3(&ia[0]);

    decltype(ia) ia4 = {0,1,2,3,4,5,6,7,8,9};
    //ia4 = p; error
    ia4[4] = 8;
    
    for (auto i : ia4)
        cout << i <<  " ";
    cout << endl; 


    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = arr;
    ++p;
    cout << "pointer p is "<< " ";
    cout << *p << endl;

    int *e = &arr[10];
    for (int *b = arr; b!= e; ++b)
        cout << *b << endl;

    int *beg = begin(ia);
    int *last = end(ia);
    while (beg != last && *beg>=0){
        cout << *beg << " ";
        ++beg;
    }    
    cout << endl;

    return 0;
}
