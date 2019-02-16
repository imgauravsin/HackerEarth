def stick():
    n=int(input())
   
    while n!=0:
        o=0
        s=str(input())
        for i in s:
            if i=='0':
                o+=6
            elif i=='1':
                o+=2
            elif i=='2':
                o+=5
            elif i=='3':
                o+=5
            elif i=='4':
                o+=4
            elif i=='5':
                o+=5
            elif i=='6':
                o+=6
            elif i=='7':
                o+=3
            elif i=='8':
                o+=7
            elif i=='9':
                o+=6
        
        num=int(o/2)
        
        s=''
        for i in range(0,num):
            s+='1'
        print(s)
        
        n-=1
    
stick()
