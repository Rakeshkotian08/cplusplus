#include <bits/stdc++.h> 

using namespace std;

int squareroot(int num)
{
    int l=1,r=num,ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
   
        if(mid*mid==num)
        {
            return mid;
        }
        if(mid*mid<num)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}

int main() {
	// Read the number of test cases.
	int n;cin>>n;
	while(n--)
	{
	   int num;cin>>num;
	   cout<<squareroot(num)<<"\n";
	   
	}

	return 0;
}