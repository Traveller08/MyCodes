fopen=open("input.txt","r")
copy=open("copy.txt","w")
count=int(0)
while 1:
    cha=fopen.read(1)
    if cha.isspace():
        count+=1
    if not cha:
        break
fopen.close()
copy.close()
with open("input.txt") as f:
    with open("copy.txt","w") as f1:
        for line in f:
            f1.write(line) 
print("the no of spaces in this file ",count)
