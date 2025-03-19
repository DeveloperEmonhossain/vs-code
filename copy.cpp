#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int v =(*max_element(a.begin(),a.end()))-(*min_element(a.begin(),a.end()));
		
		
		// if(n=='1')cout<<'0'<<endl;
		// else{
		// for(int i=1;i<n;i++)
		// {
		// 	ans+=v;
		// }
		// }
		// cout<<ans<<endl;
		

		cout<<v*(n-1)<<endl;
	}

}