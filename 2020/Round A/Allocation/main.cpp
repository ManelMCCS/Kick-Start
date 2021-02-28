#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int DEBUG = 0;

    int n, b;
    
    cin >> n >> b;
    if(DEBUG) printf("%d %d \n", n, b);

    int a[16];
    
    for(int i=0; i<n; ++i) cin >> a[i];

    sort(a, a + n);

    int i = 0;
    int ret = 0;

    	for(int i=0; i<n; ++i) 
        {
		    if(b>=a[i])
            {
			    b-=a[i];
			    ++ret;
		    }
        }

    return ret; 
}

int main()
{
    int numTest;

    cin >> numTest;
    
    for(int i = 0; i < numTest; i < i++)
    {
        cout << "Case #" << i+1 << ": ";
        cout << solve() << '\n';
    }

    return 0;
}