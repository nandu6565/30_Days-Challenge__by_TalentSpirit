#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ProductSmallestPair(int *array,int n,int sum){
    
    if(n<2){
        return -1;
    }
    int temp;
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp = array[i];
                array[i]= array[j];
                array[j] = temp;
            }
        }
    }
    int check = array[0] + array[1];
    int answer=0;
    if(check<sum){
        answer= array[0]*array[1];
    }
    else{
        answer=0;
    }
    return answer;
}

int main(){
    int n,sum,result;
    cin>>sum;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    result = ProductSmallestPair (array,n,sum);
    cout<<result;
    return 0;
}
