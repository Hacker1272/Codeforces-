#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,m,k;
  cin>>n>>m>>k;
  int min_edges = n-1;
  int max_edges = (n*(n-1))/2;
  if(m<min_edges or m>max_edges){
    cout<<"NO\n";
    return;
  }
  if(n==1){
    if(k>1){
      cout"YES\n";
    }else{
      cout"NO\n";
    }
  }else if(m<max_edges){
    if(k>3){
      cout"YES\n";
    }else{
      cout"NO\n";
    }
  }else if(k>2){
    cout"YES\n";
  }else{
    cout"NO\n";
  }
}
int main(){
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
