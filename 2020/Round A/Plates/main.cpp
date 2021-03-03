#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1
#define MAX 1000
 
class _Stack {
    int top;
 
public:
    int a[MAX]; // Maximum size of Stack
 
    _Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void print();
    int sum(int n);
};
 
bool _Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        if (DEBUG)cout << "Stack Overflow\n";
        return false;
    }
    else {
        a[++top] = x;
        if (DEBUG)cout << x << " pushed into Stack\n";
        return true;
    }
}
 
int _Stack::pop()
{
    if (top < 0) {
        if (DEBUG)cout << "Stack Underflow\n";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int _Stack::peek()
{
    if (top < 0) {
        if (DEBUG)cout << "Stack is Empty\n";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool _Stack::isEmpty()
{
    return (top < 0);
}

void _Stack::print()
{
    int n = top + 1;
    
    cout << "top-> ";
    for(int i = 0; i < n; i++) cout << a[top - i] <<" ";
    cout << "<-down \n";
}

int _Stack::sum(int n)
{
    int ret = 0;

    if(n == -1) 
    {
       int max = top + 1;
       for(int i = 0; i < max; i++) ret += a[i];
    }
    else
    {
        for(int i = 0; i < n; i++) ret += a[top - i];
    }
    
    return ret;
}

int solve()
{
    
    int ret = 0;

    int N, K, P;
    
    cin >> N >> K >> P;
    if(DEBUG) printf("%d %d %d\n", N, K, P);

    int* auxS = new int[N];
    _Stack* S = new _Stack[K];

    for(int s = 0; s < N; s++)
    {
        int aux;
        
        for(int t = 0; t < K; t++)
        {
            cin >> auxS[t];
        }
        
        for(int t = 0; t < K; t++)
        {
            S[s].push(auxS[K-t -1]);
        }
    }

    if(DEBUG)
    {
        S[0].print();
        S[1].print();
    }

    int aux;

    K+=1;
    for(int s = 0; s < K; s++)
    {
        aux = S[0].sum(s) + S[1].sum(K-s);

        if(aux > ret) ret = aux;

        if(DEBUG) cout << "aux:" << aux << ";S0: "<< s << "\n";
    }

    if(DEBUG) cout << "Ret:" << "\n";
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