#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int bin;
    cin >> n;
    
   vector<int>vc;
    while(n>0)
    {
        bin=n%2;
        vc.push_back(bin);
        n=n/2;
    }
    for(auto i=vc.rbegin();i!=vc.rend();++i)
    {
      cout<<*i;
    }
    
    return 0;
}
