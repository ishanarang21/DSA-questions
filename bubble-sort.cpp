#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int round=1;round<n-1;round++)
    {
        for(int j=0;j<n-round;j++)
        {
           if(arr[j]>arr[j+1])
           {
            swap(arr[j],arr[j+1]);
           }
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1,4,3,5,2};
    int n=5;
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;

}