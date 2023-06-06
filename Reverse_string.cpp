//with O(n^2) time complexity
#include<bits/stdc++.h>
using namespace std;
void swap(char* p,char* q){
    char temp=*p;
    *p=*q;
    *q=temp;
}
void W_reverse(string &s,int f,int l){
    while(f<l){
        swap(s[f++],s[l--]);
    }
}
string S_reverse(string s){
    int i,j,f_index=0;
    for(i=0;i<s.size();i++){
        if(s[i]==' '){
            W_reverse(s,f_index,i-1);
            f_index=i+1;
        }
    }
    W_reverse(s,f_index,s.size()-1);
    return s;
}
int main(){
    string s="This is a program";
    s=S_reverse(s);
    cout<<s<<endl;
    return 0;
}
