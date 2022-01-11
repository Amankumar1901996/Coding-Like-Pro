#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string r;
    
    int pos=0;
    
    cin>>s;
    cin>>r;
    
    for(int i=0;i<r.length();i++){
       if(r[i]==s[pos]){
           pos+=1;
       }
    }
    cout<<pos+1;

    return 0;
}
