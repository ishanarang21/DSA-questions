#include <iostream>
#include <vector>
using namespace std;
int main()
{  
  vector<int>arr{1,2,2,3};
  vector<int>brr{2,2,3,4};
  vector<int>crr;
  for(int i=0;i<arr.size();i++)
  {
    for(int j=0;j<brr.size();j++)
    {  
        int element=arr[i];
       if(element==brr[j])
       {
        brr[j]=-1;
        crr.push_back(element);
       }
    }
  }
  //printing crr
  for(int k=0;k<crr.size();k++)
  {
    cout<<crr[k]<<" ";
  }
  cout<<endl;
  return 0;
}