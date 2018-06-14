#include <iostream>

using namespace::std;

int main(){
    //int ia[3][4]; // array of array 
    int ia[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    int ia1[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int ia2[3][4] = {{0}, {4}, {8}}; // first element of each row
    int ix[3][4] = {0,3,6,9}; // first row initialize, else 0
    
    int (&rowxx)[4] = ia[1];
    cout << "the first element of second row is " << rowxx[0] << endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    int iax[rowCnt][colCnt];
    for (size_t i=0; i != rowCnt; ++i){
        for (size_t j = 0; j != colCnt; ++j){
            iax[i][j] = i*colCnt + j;
        }
    }

    int iay[3][4];
    size_t cnt = 0;
    for (auto &row : iay){
        for (auto &col : row){
            col = cnt;
            ++cnt;
        }
    }


    cout << "print iay element ..." << endl;
    for (auto &row : iay){
        for (auto col : row){
            cout << col << " iay ";
        }
        cout << endl;
    }

    cout << "print ia element ..." << endl;
    for (auto p = ia; p != ia+3; p++){
        for (auto q = *p; q != *p+4; q++)
            cout << *q << " ";
        cout << endl;
    }

    for (auto p=begin(ia); p !=end(ia); ++p){
        for (auto q=begin(*p); q != end(*p); ++q)
            cout << *q << ",,,";
        cout << endl;
    }

    using int_array = int[4];
    //typedef int int_array[4];
    for (int_array *p=ia; p != ia+3; ++p){
        for (int *q = *p; q!=*p+4; ++q)
            cout << *q << "; ";
        cout << endl;
    }
    return 0;
}
