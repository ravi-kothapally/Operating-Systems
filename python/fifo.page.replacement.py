f1=int(input("enter no frames"))
r=list(map(int,input("ref str").split()))
f=[None]*f1;fc=[-1]*f1;x=0;c=0
for i in range(len(r)):
    if(r[i] not in f):
        c+=1
        x=fc.index(min(fc))
        fc[x]=i
        f[x]=r[i]
    print(f)
print("paage fault=",c)
    
