a=list(map(int,input("enter arrival times").split()))
b=list(map(int,input("enter burst times").split()))
tq=int(input("time quantum"))
i=t=0;c=[0,0,0,0,0,0,0,0,0];d=a[:];q=[];f=-1;w=a[:];h=b[:]
def rr():
    for ii in range(len(a)):
        x=min(w)
        if(x<=t):
            q.append(w.index(x))
            w[w.index(x)]=99
while i<len(a):
    p=a.index(min(a))
    rr()
    if(a[p]<=t):
        f+=1;p=q[f]
        if(b[p]>tq):
            t=t+tq
            b[p]-=tq;w[p]=99
            rr()
            q.append(p)
        else:
            t+=b[p]
            b[p]=0
            w[p]=a[p]=99
            c[p]=t
            i+=1
        print (" p%d %d|"%(p+1,t),end ="")    
    else:
        t=a[p]
        print(" /// %d|"%t,end="")
print("\nct\ttat\twt")
for i in range(len(a)):
    print("%d\t%d\t%d\t"%(c[i],c[i]-d[i],c[i]-d[i]-h[i]))
