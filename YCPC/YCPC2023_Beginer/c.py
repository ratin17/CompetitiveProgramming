s=input()
a=""
w=""
for i in range(0,len(s)):
    if ord(s[i])>48 and ord(s[i])<58:
        t=int(s[i])
    elif s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/':
        for j in range(t):
            a=a+w
        a=a+s[i]
        w=""
    else:
        w=w+s[i]

for p in range(t):
    a=a+w     

print(a)