#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int arr[1000];
int n,m,count=0;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
  
    if(arr[i]>=arr[m-1] && arr[i]>0) count++;
}
cout<<count<<endl;

    return 0;
}
