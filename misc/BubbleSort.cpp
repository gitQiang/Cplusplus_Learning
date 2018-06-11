#include <iostream>
using namespace::std;

void BubbleSort(int* pData, int Count)
{
    int iTemp;
    for (int i=1; i<Count; i++)
    {
        for (int j = Count-1; j>=i; j--)
        {
            if (pData[j]<pData[j-1])
            {
                iTemp = pData[j-1];
                pData[j-1] = pData[j];
                pData[j] = iTemp;
            }
        }
    }
}

int main()
{
    int data[] = {19,9,8,7,6,5,4};
    BubbleSort(data, 7);
    for (int i=0; i<7; i++){
        cout<<data[i]<<endl;
    }
    return 0;
}

