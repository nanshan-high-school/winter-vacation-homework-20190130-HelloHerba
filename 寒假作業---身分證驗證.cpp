#include <iostream>
using namespace std;
int main() {
    string code;
    int i,num,num1,num2,total,add1,add2,test;
    cout<<"請輸入身分證(第一碼輸入大寫英文字母)：";
    cin>>code;
    num=code.length();
    num1=(int)code[0]-55;
    for(i=0;i<num;i++)
    {
        if(code[i]<='Z'&&code[i]>='A')
        {continue;}
        num2=(int)code[i]-48;
        num2=num2*(num-1-i);
        total=total+num2;
    }
    add1=num1/10;
    add2=num1%10*9;
    num1=(int)code[num-1]-48;
    cout<<num1<<"\n";
    total=total+add1+add2+num1;
    cout<<"此身分證為";
    test=total%10;
    if(test==0){
        cout<<"real";
    }else{
        cout<<"false";
    }
}
