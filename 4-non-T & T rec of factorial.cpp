//non TAIL recursive program of factorial
#include <iostream>
using namespace std;
int ans=1;
void fact(int n){
    if(n>0){
    fact(n-1);
      ans=ans*n;
    }
}
int main()
{
    int x;
    cin>>x;
    fact(x);
    cout<<ans;
    return 0;
}

//TAIL recursive program of factorial
#include <iostream>

using namespace std;
int ans=1;
void fact(int n,int k=1){
    if(n>0){
    ans=ans*k;
    fact(n-1,k+1);
    }
}
int main()
{
    int x;
    cin>>x;
    fact(x);
    cout<<ans;
    return 0;
}
