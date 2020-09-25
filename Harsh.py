def check_number(number):
    i=2
    while(i*i<=number):
        if number&i==0:
            return number/i
        i+=1
    return 1


num1,num2=map(int,input().split())

if num1<num2:
    temp=num1
    num1=num2
    num2=temp
if num1 == num2:
    print('0')
    exit(0)
m=map('num1','num2')
count=0
while(num1!=1):
    count+=1
    num1=check_number(num1);
    m[num1]=count;

    
count=0;
while(m.count(num2) != 0):
    count+=1;
    num2=check_number(num2);
    print(count+m[num2]);
