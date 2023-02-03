
t=int(input())
for v in range(t):
    max=0
    n=int(input())
    s=input()

    l=len(s)
    # print("len:",l)
    for k in range(l-1):
        a=set()
        b=set()
        for i in range(k+1):
            a.add(s[i])
        for i in range(k+1,l):
            b.add(s[i])

        temp=len(a)+len(b)
        # print(a,b)
        if temp>max:max=temp

    print(max)