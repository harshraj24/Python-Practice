#include <bits/stdc++.h>
using namespace std;
                     
#define int long long



int check_number(int number);

void funct()
{   
    int natural_number1,natural_number2,count=0,temp;
    cin>>natural_number1>>natural_number2;
    if(natural_number1<natural_number2){
        temp=natural_number1;
        natural_number1=natural_number2;
        natural_number2=temp;
    }
        
    if(natural_number1==natural_number2){
        cout<<0;return;
    }
    
    
    map<int,int> mappin;
    
    while(natural_number1!=1)
    {
        count++;
        natural_number1=check_number(natural_number1);
        mappin[natural_number1]=count;
    }
    
    count=0;
    while(!mappin.count(natural_number2))
    {
        count++;
        natural_number2=check_number(natural_number2);
    }
    cout<<count+mappin[natural_number2];
}




int check_number(int number)
{
    for(int i=2;i*i<=number;i++)
    {
        if(number%i==0)return number/i;
    }
    return 1;
}


int32_t main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    funct();
    return 0;
}   