#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    int CheckPassword(char str[], int n){
        if(n<4){
            return 0;
        }
        if(str[0]-'0'>=0 && str[0]-'0'<=9){
            return 0;
        }
        int cap=0,num=0;
        for (int i=0;i<n;i++){
            if(str[i]==' ' || str[i]=='/'){
                return 0;
                break;
            }
            if(str[i]>=65 && str[91]){
                cap++;
                
            }
            if(str[i]-'0'>=0 && str[i]-'0'<=9){
                num++;
            }
        }
        return cap > 0 && num > 0;
    }
    int main ()
{
  string s;
  getline (cin, s);
  int len = s.size ();
  char *c = &s[0];
  cout << CheckPassword (c, len);
}
