#include <iostream>
using namespace std;
int main() {
    int i,num,num1,num2,num3;
    string password;
    char number[6];
    cout<<"請輸入密碼(七個大寫英文字母):";
    cin>>password;
    num=password.length();
    for(int i=0;i<num;i++)
    {
        if(i==6)
        {
            return 0;
        }
        num1=(int)password[i];
        num2=(int)password[i+1];
        if(num2>=num1)
        {    
            cout<<num2-num1;
        }
        else if(num2<num1)
        {
            cout<<num1-num2;
        }
    }   
     
}
