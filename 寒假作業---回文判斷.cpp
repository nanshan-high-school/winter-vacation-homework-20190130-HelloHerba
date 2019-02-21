#include <iostream>
using namespace std;
int main() {
int num,i;
string word;
cout<<"請輸入一串文字：";
cin>>word;
num=word.length();
for(int i=0;i<num;i++)
{
    cout<<word[i]<<"\n";
}
cout<<"此串文字是否為回文：";
for(i = 0 ; i < num ; i++)
{
    if(word[i]==word[num-1-i])
    {
        continue;
    }
    else
    {
        cout<<"no";
        return 0;
    }    
}
if(i==num)
{
    cout<<"yes";
}
}
