
def transformSentence(sentence):
    ans=""
    ans=ans+sentence[0]
    for i in range(1,len(sentence)):
        
        if sentence[i]==' ' or sentence[i-1]==' ' or sentence[i]==sentence[i-1]:
            ans=ans+sentence[i]
            continue
        
        a=ord(sentence[i-1])
        b=ord(sentence[i])

        c=a
        d=b
        
        # print(a,b," ",end="")
        if c>96:c=c-32
        if d>96:d=d-32

        # print(a,b,sentence[i]," ",end="")
        
        if c<d:ans=ans+chr(d)
        else:ans=ans+chr(d+32)

        # print(sentence[i])
    
    return ans
        

s=input()
q=transformSentence(s)
print(q)
