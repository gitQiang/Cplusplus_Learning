#include <iostream>
#include <string>

using namespace::std;

int main(){
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    int arr[10];
    int *parr[sz];
    //string bad[cnt]; error
    const unsigned sz1 = 3;
    int ia1[sz] = {0, 1, 2};
    int a2[] = {0,1,2};
    int a3[5] = {0,1,2}; // a3[5] = {0,1,2,0,0};
    string a4[3] = {"hi", "bye"};// a4[3]={"hi","bye",""}
    //int a5[2] = {0,1,2}; error
    

    // char array
    char ca1[] = {'C', '+', '+'}; // 3
    char ca2[] = {'C', '+', '+', '\0'}; // 4
    char ca3[] = "C++"; // 4
    //const char a4[6] = "Daniel"; //len is at least 7,  error
    const char ca4[7] = "Daniel"; // 

    // copy and set values errors 
    int a[] = {0,1,2};
    // int a1[] = a; // error
    // a1 = a; // error
    
    //declare complated array
    int *ptrs[10];
    int (*Parray)[10] = &arr;
    int (&arrRef)[10] = arr;

    int *(&arry)[10] = ptrs;
    // read from array name from inside to outside. 
    
    return 0;

}
