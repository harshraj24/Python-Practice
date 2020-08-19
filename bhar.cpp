#include <bits/stdc++.h>
using namespace std;
                     
#define int long long



int sum_permutation(int curr_number);

void funct()
{   
    int number_1,number_2,count=0,swap;
    map<int,int> wormap;
    cin>>number1>>number2;
    if(number_1<number_2){
        swap=number1;
        number_1=number_2;
        number_2=temp;
    }
        
    if(number_1==number_2){
        cout<<0;
        return;
    }
    
    
    
    
    while(number_1!=1)
    {
        count++;
        number_1=sum_permutation(number_1);
        wormap[number_1]=count;
    }
    
    count=0;
    while(!wormap.count(natural_number2))
    {
        count++;
        natural_number2=sum_permutation(natural_number2);
    }
    cout<<count+wormap[natural_number2];
}




int sum_permutation(int curr_number)
{
    for(int i=2;i*i<=number;i++)
    {
        if(curr_number%i==0)return curr_number/i;
    }
    return 1;
}


int32_t main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    funct();
    return 0;
}   