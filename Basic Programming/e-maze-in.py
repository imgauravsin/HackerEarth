'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
s=str(input())
x=0
y=0
for i in s:
    if i=='L':
        x=x-1
    elif i=='R':
        x=x+1
    elif i=='D':
        y=y-1
    elif i=='U':
        y=y+1
print(str(x)+' '+str(y))