from itertools import product
def add_list(curr_value):
    sum=0
    for i in range(len(curr_value)):
        sum=sum+int(curr_value[i])
    return sum


low,high=map(int,input().split())
k=int(input())
permutation_list=[]
for i in range(low,high+1):
    permutation_list.append(str(i))
count=0
no_of_permutations=product(permutation_list,repeat=k)
for i in no_of_permutations:
    if (add_list(i)%2==0):
        count+=1
    else:
    	pass
print(count%100000007)