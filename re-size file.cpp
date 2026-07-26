#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    freopen("clark-y.txt","r",stdin);
    freopen("clark-y.out","w",stdout);
    double x;
    int m=0;
    while(cin>>x){
        m++;
        m=m%2;
        if(m==0)cout<<0<<' ';
        if(m==0)cout<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}