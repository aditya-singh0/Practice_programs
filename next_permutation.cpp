#include<bits/stdc++.h>
#define deb(x) cout << #x <<'	'<< x << endl
using namespace std;
int main()
{  vector<int> a={1, 5 ,8, 4,7,6,5,3,1};
  //vector<int> a={4,3,2,1};
  int i,n=a.size(),j;
        for(i=0;i<n-1;i++)
            if(a[n-i-1]>a[n-i-2])
                break;
        if(i==n-1 or n==2)
        {reverse(a.begin(),a.end());
		for(int z=0;z<n;z++)
	cout<<a[z]<<" "; 
        return 0;}
		i--;
        int jm=a[i+1],t=i;
        for(j=i+1;j<n;j++)
            if(a[j]>a[i] and a[j]<jm)
             {jm=a[j];t=j;}
			 deb(a[i]);deb(a[t]);
         swap(a[i],a[t]);
    reverse(a.begin()+i+1,a.end());
	for(int z=0;z<n;z++)
	cout<<a[z]<<" "; 
	
return 0;
}