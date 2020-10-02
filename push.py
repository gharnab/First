t=int(input())
for i in range(1,t):
    n,a,b,k = input().split()
    n=int(n)
    a=int(a)
    b=int(b)
    k=int(k)
    c=(n//a)+(n//b)-(n//(a*b))
    if(c>=k):
        print("win")
    else:
        print("lose")
    
