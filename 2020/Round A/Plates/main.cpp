#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class stack
{
    int top;

    public:

}

int DEBUG = 1;

int solve()
{
    
    int ret = 0;

    int N, K, P;
    
    cin >> N >> K >> P;
    if(DEBUG) printf("%d %d %d\n", N, K, P);

    stack <int> st[];
    int* A = new int[N * K];

    for(int m = 0; m < N; m++)
    {
        for(int n = 0; n < K; n++) cin >> A[m*N + n];

        if(DEBUG)
        {
            cout << "P:";
            for(int n = 0; n < K; n++) cout << A[m*N + n] << ' ';
            cout << '\n';

        }
    }

    /*int a[16];
    
    for(int i=0; i<n; ++i) cin >> a[i];

    sort(a, a + n);

    int i = 0;
    

    	for(int i=0; i<n; ++i) 
        {
		    if(b>=a[i])
            {
			    b-=a[i];
			    ++ret;
		    }
        }
    */
    return ret; 
}

int main()
{
    int T;

    cin >> T;
    if(DEBUG) cout << T <<" tests \n\n";
    
    for(int i = 0; i < T; i < i++)
    {
        cout << "Case #" << i+1 << ": ";
        cout << solve() << '\n';
    }

    return 0;
}