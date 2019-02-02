def prime():
    # Write your code here
    num1=int(input('NUM1'))
    num2=int(input('NUM2'))
    for i in range(0,num2-num1):
        b=i+num1+1
        if b%2!=0 and b%3!=0 and b%5!=0 and b%7!=0:
            a=str(b)
            length=len(a)
    
        
            sum1=0
        
            for i in range(0,length):
        
                sum1+=int(a[i])

            if str(sum1)=='2' or str(sum1)=='3' or str(sum1)=='5' or str(sum1)=='7':
                print(a)
            
            if sum1%2!=0 and sum1%3!=0 and sum1%5!=0 and sum1%7!=0:
                print(a)       
prime()