#include <iostream>
using namespace std;
int main() {
    int daycount,i,num1,total=0,count=0;
    string  buy;
    cout<<"請輸入文文買了幾天的饅頭：";
    cin >> daycount;
    for(i=0;i<daycount;i++)
    {
        cout<<"請輸入文文第"<<i+1<<"天買了多少饅頭：";
        cin>>buy[i];
    }
    for(i=0;i<daycount;i++)
    {
        num1=(int)buy[i]-48;
        count=count+num1;
        num1=num1*(i+1);
        total=total+num1;
    }
    cout<<"文文共花了"<<total<<"元";
}
