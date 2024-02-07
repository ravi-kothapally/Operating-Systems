f1=int(input("no of frames"))
r=list(map(int,input("ref string").split()))
f=[None]*f1;lf=[0]*f1;c=0
for i in range(len(r)):
    if ( r[i] in f):
        lf[f.index(r[i])]+=1
        c+=1
    else:
        x=lf.index(min(lf))
        f[x]=r[i]
        lf[x]=1+i/len(r)
    print(r[i]," ",f," ",lf)
print("page miss :",len(r)-c)
