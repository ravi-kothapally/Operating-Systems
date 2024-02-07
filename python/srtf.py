a=list(map(int,input("enter arrival times").split()))
b=list(map(int,input("enter burst times").split()))
i=t=0;c=[0,0,0,0,0,0,0,0];e=b[:];d=a[:]
def bid():
    p=a.index(min(a))
    if(a[p]<=t):
        m=999;
        for i in range(len(a)):
            if(b[i]<=m and a[i]<=t):
                if(b[i]==m):
                    if(a[p]>a[i]):
                        m=b[i]
                        p=i
                else:
                    m=b[i]
                    p=i
    return p
while i<len(a):
    p= bid()
    if(a[p]<=t):
        t=t+1
        b[p]-=1
        if(b[p]==0):
            a[p]=99
            i=i+1
            c[p]=t
        print (" p%d %d|"%(p+1,t),end ="")      
    else:
        t=a[p]
        print(" /// %d|"%t,end="")
print("\nat\tbt\tct\ttat\twt")
for i in range(len(a)):
    print("%d\t%d\t%d\t%d\t%d\t"%(d[i],e[i],c[i],c[i]-d[i],c[i]-d[i]-e[i]))
    
        
    
