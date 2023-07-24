#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int food(int r,int unit,int n,int arr[]){
    if(n<1){
        return -1;
    }
    int fr = r*unit;
    int fp = 0;
    for(int i=0;i<n;i++){
        fp +=arr[i];
        if(fp>=fr){
            
            return i+1;
        }
    
    }
    if(fp<fr){
        return -1;
    }
    
    
}
int main(){
    int r,unit,n;
    cin>>r>>unit>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<food(r,unit,n,arr);
    return 0;
    
}