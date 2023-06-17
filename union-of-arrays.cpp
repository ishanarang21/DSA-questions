#include <iostream>
#include <vector>
using namespace std;
int main()
{  
  vector<int>arr{1,2,3};
  vector<int>brr{3,4};
  vector<int>crr;
  for(int i=0;i<arr.size();i++)
  {
    crr.push_back(arr[i]);
  }
  for(int j=0;j<brr.size();j++)
  {
    crr.push_back(brr[j]);
  }
  //printing crr
  for(int k=0;k<crr.size();k++)
  {
    cout<<crr[k]<<" ";
  }
  cout<<endl;
}