// Contest Code: START58D 


// Problem Code: REACHTARGET (https://www.codechef.com/START58D/status/REACHTARGET,naman_mittal1)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x, y;
	    cin>>x>>y;
	    cout<<x-y<<endl;
	    
	}
	return 0;
}


// Problem Code:  RANKLISTPAGE (https://www.codechef.com/START58D/problems/RANKLISTPAGE)

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x, i;
        cin>>x;

        if(x<25)
        {
            cout<<1<<endl;
        }
        else
        {
            i=x/25;
            if(x%25 == 0)
            {
                cout<<i<<endl;
            }
            else
            {
                cout<<i+1<<endl;
            }    
        }
    }
	return 0;
}


// Problem Code: ARRAYBREAK (https://www.codechef.com/START58D/problems/ARRAYBREAK)

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int x=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                x++;
            }
        }
        
        if(x==n || x==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<n-x<<endl;
        }
        
    }
    return 0;
}


// Problem Code: REMOVEBAD (https://www.codechef.com/START58D/problems/REMOVEBAD)

#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n)
{
    int max = INT_MIN;
    unordered_map<int, int> mp;
 
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    for (auto x : mp)
        if(x.second>max)
        {
            max = x.second;
        }
    return max;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x=0, t;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        x = count(arr, n);
        
        cout<<(n-x)<<endl;
    }
}
