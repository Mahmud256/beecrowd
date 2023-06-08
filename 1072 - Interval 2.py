n = int(input())

iin = 0
out = 0

for i in range(n):
    i = int(input())
    
    if i%2==0:
        iin+=1
    else:
        out+=1
        
print(iin,"in")
print(out,"out")
