# cook your dish here
t = int(input())
for _ in range(t):
    n = int(input())
    ans = 1;
    for i in range(n):
        ans*= 0.143*n
    new_a = int(ans)
    
    if(ans-new_a<0.5):
        print(new_a)
    else :
        print(new_a+1)
        