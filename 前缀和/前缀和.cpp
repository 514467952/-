#include<iostream>
using namespace std;
const int  N = 100010;
int s[N],a[N];
int n,m;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i) cin>>a[i];
    
    //前缀和初始化
    for(int i=1;i<=n;++i) s[i] = s[i-1]+a[i];
    
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        printf("%d\n",s[r]-s[l-1]);//前缀和公式，s[r]-s[l-1];
    }
    return 0;
}