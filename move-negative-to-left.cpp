#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements in array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}    
cout<<endl;
cout<<"Array is"<<endl;
for(int j=0;j<n;j++)
{
    cout<<arr[j]<<" ";
}
int start=0;
for(int i=0;i<n;i++)
{
    if(arr[i]<0)
    {
        swap(arr[i],arr[start]);
    }
}
cout<<endl;
cout<<"Solution array is"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;

}
