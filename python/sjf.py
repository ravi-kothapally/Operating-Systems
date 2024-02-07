a=list(map(int,input("enter arrival times").split()))
b=list(map(int,input("enter burst times").split()))
i=t=0;c=[0,0,0,0,0,0,0,0];d=a[:]
while i<len(a):
    p=a.index(min(a))
    if(a[p]<=t):
        m=999;
        for i in range(len(a)):
            if(b[i]>=m and a[i]<=t):
                if(b[i]==m):
                    if(a[p]>a[i]):
                        m=b[i]
                        p=i
                else:
                    m=b[i]
                    p=i
        t=t+b[p]
        a[p]=99
        print (" p%d %d|"%(p,t),end ="")
        i=i+1
        c[p]=t
    else:
        t=a[p]
        print(" /// %d|"%t,end="")
print("\nct\ttat\twt")
for i in range(len(a)):
    print("%d\t%d\t%d\t"%(c[i],c[i]-d[i],c[i]-d[i]-b[i]))
    
        
    
