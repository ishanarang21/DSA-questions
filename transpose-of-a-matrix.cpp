#include <iostream>
using namespace std;
void transpose(int arr[][3],int r,int c,int transposeArr[][3])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           transposeArr[j][i]=arr[i][j];
        }
    }
}
void printarray(int transposeArr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<transposeArr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()

{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=0;
    int c=0;
    int transposeArr[3][3];
    transpose(arr,3,3,transposeArr);
    printarray(transposeArr,3,3);
    
   
    return 0;
}