f1=int(input("no of frames"))
r=list(map(int,input("ref string").split()))
f=[None]*f1;op=[100]*f1;c=0;fc=[-1]*f1
def e(q):
    if (r[i] in r[i+1:]):
        op[q]=r[i+1:].index(r[i])+i+1
    else:
        op[q]=99-fc[q]
for i in range(len(r)):
    if (r[i] in f):
        e(f.index(r[i]))
        c+=1
    else:
        p=op.index(max(op))
        fc[p]=i
        f[p]=r[i]
        e(p)
    print (r[i]," ",f,"  ",op)
print("page miss :",len(r)-c)

            
