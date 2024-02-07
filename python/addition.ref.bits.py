f1=int(input("enter no of frames"))
r=list(map(int,input("ref string").split()))
f=[None]*f1;ab=[0]*f1;fc=[-1]*f1;fi=0;c=0
for i in range(len(r)):
    if(r[i]==-1):
        for k in range(f1):
            ab[k]=ab[k]>>1
    else:
        if (r[i] in f):
            x=f.index(r[i])
            ab[x]=ab[x]|8
        else:
            c+=1
            m=99;mf=99;
            for j in range(f1):
                if(m>=ab[j]):
                    if(m==ab[j]):
                        if(fc[j]<fc[fi]):
                            m=ab[j]
                            fi=j
                    else:
                        m=ab[j]
                        fi=j
            f[fi]=r[i];fc[fi]=i;ab[fi]=0
    print (f," ",ab)
print("page miss=",c) 
            
#7 0 1 -1 2 0 3 -1 0 4 2 -1 3 0 3 -1 2 1 2 -1 0 1 7 -1 0 1
