'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
n=int(input())
x=int(input())
while n!=0:
    y=int(input())
    if x<=y:
        print('YES')
    else:
        print('NO')
    n=n-1    
    
