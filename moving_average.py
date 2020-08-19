if __name__ == '__main__':
    x,y=input().split()
    n = int(input())
    closing_price=input().split()
    i, fist, second = 0, 0, 0 
    max = [0]*n 
    min = [0]*n 
    upper = 0 
    lower = 0 
    
        
    for i in range(1, n-1): 
        if (closing_price[i] < closing_price[i - 1] and closing_price[i] < closing_price[i + 1]): 
            min[upper] = i 
            upper += 1 
          
        if (closing_price[i] > closing_price[i - 1] and closing_price[i] > closing_price[i + 1]): 
            max[lower] = i 
            lower+= 1 

      
 
    if (min[0] == 0): 
        first = lower 
        second = upper- 1 
    else: 
        first = lower- 1 
        second = upper 
      
    print(first+second+1) 