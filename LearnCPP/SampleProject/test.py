
# x^2 + 6x + 9
# 2x + 6

def poly(x):
    return x**2 + 6*x + 9

def derivative(x):
    return 2*x + 6

def tangent(x,y):
    return y/derivative(x)
    

iterations = int(input())
i=0
x = int(input())
while(i<=iterations):
    x-=tangent(x,poly(x))
    i+=1
print(x)
