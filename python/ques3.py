t=[('V',62), ('VI',68), ('VII',72), ('VIII',70), ('IX',74), ('X',65)]
minm=int(1e20)
maxm=int(-1e20)

a=int(0)
b=int(0)
for (x,y) in t:
    minm(y) = lambda minm : min(minm,y)
    maxm = lambda maxm : max(maxm,y)
   
print(minm)
print(maxm)
  
  def fun(k):
      if(k=1e20):
          return k
   return   fun(k+1)*fun(k+2)