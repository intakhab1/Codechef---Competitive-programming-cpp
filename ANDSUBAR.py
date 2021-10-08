for _ in range(int(input())):
    n=int(input())
    if n==1:
        print(1)
        continue
    tmp=1
    while(tmp*2<=n):
        tmp*=2
    st=n-tmp+1
    if n==tmp:
        print(tmp//2)
    else:
        print(max(st,tmp//2))
