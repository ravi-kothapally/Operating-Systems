f1=int(input("enter no frames"))
r=list(map(int,input("ref str").split()))
f=[None]*f1;lr=[-1]*f1;x=0;c=0;
for i in range(len(r)):
    if(r[i] in f):
        x=f.index(r[i]);c+=1
    else:
        x=lr.index(min(lr))
        f[x]=r[i]
    lr[x]=i
    print(f)
print("page miss=",len(r)-c)
    
        
