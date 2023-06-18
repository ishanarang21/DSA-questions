#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int>arr{0,1,0,1,1,0,0};
    int start=arr[0];
    int end=arr.size()-1;
    while(start<end){
        int i=0;
        if(arr[i]==0){
        swap(arr[i],arr[start]);
        start++;
        i++;
        }
        else
        {
            swap(arr[end],arr[i]);
            end--;
            }
    }
    
    //print
    for(int j=0;j<arr.size();j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}