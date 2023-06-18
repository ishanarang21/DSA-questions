#include <iostream>
#include <vector>
using namespace std;
void printrowsum(int arr[][4],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"sum of "<<i<<"th row is "<<sum<<endl;
    }
}

int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};
    printrowsum(arr,4,4);
    
    return 0;
}