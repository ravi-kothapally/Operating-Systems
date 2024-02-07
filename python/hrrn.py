a=list(map(int,input("enter arrival times").split()))
b=list(map(int,input("enter burst times").split()))
i=t=0;c=[0,0,0,0,0,0,0,0];d=a[:]
while i<len(a):
    p=a.index(min(a))
    if(a[p]<=t):
        m=[[],[]]
        for k in range(len(a)):
            if(a[k]<=t):
                m[0].append(k)
                m[1].append(((t-a[k])+b[k])/b[k])
        p=m[0][m[1].index(max(m[1]))]
        t=t+b[p]
        a[p]=99;
        print (" p%d %d|"%(p+1,t),end ="")
        i=i+1
        c[p]=t;
    else:
        t=a[p]
        print(" /// %d|"%t,end="")
print("\nct\ttat\twt")
for i in range(len(a)):
    print("%d\t%d\t%d\t"%(c[i],c[i]-d[i],c[i]-d[i]-b[i]))
    
        
    
