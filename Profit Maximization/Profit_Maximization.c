#include<conio.h>
using namespace std;
int solve(int n,vector<int> p)
{
    vector<int> B;
    int j=0;
    int i;
    B.push_back(p[0]);
    for(i=1;i<n;i++)
    {

        while(p[i]%p[j]!=0&&j!=0)
        {
            j--;
        }
        B.push_back(p[i]);
        if(p[i]%p[j]==0)
        {
            B[i]=max(B[i],p[i]+B[j]);
        }
        j=i;
    }
    sort.(B.begin(),B.end());
    return B[n-1];
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i_p=0;i_p<n;i_p++)
    {

        cin>>p[i_p];
    }
    int out_;
    out_=solve(n,p);
    cout<<out_;
}
