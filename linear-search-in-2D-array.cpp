#include <iostream>
using namespace std;
int main()
{
    int arr[2][2]={{1,2},{3,4}};
    cout<<"Enter the element to find"<<endl;
    int key;
    cin>>key;
    //rows
    int r=0;
    //columns
    int c=0;
    bool ans=false;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(arr[i][j]==key)
           {
            ans=true;
           }
        }
        
    }
    if(ans=true)
    {
        cout<<"Element found"<<endl;
    }
    else if(ans=false)
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}