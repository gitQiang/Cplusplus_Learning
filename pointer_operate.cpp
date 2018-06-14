#include <iostream>

using namespace::std;

int main(){
    constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr;
    int *ip2 = ip + 4;
    cout << "ip is " << *ip << endl;
    cout << "ip2 is " << *ip2 << endl;

    int *ip1 = arr + sz;
    const int sz0 = 2;
    int *ip3 = arr + sz0;
    cout << "ip1 is " << *ip1 << endl;
    cout << "ip3 is " << *ip3 << endl;

    int *b = arr, *e = arr + sz;
    while(b < e){
        cout << *b << " ";
        ++b;
    }
    cout << endl;

    int a1[] = {2,4,6,8,0};
    int last = *(a1 + 4);
    cout << "last is " << last << endl;
    int sl = *a1 + 1;
    cout << "sl is " << sl << endl;

    int ia[] = {0,2,4,6,8,10};
    int i = ia[2];
    cout << "i is " << i << endl;
    int *px = &ia[2];
    i = *(px+2);
    cout << "new i is " << i << endl;

    int j = px[1];
    int k = px[-1];
    cout << "j value is " << j << endl;
    cout << "k vlaue is " << k << endl;

    return 0;
}
