t = int(input())
for i in range(t):
    mp1 = dict()
    mp2 = dict()
    n = int(input())
    for j in range(4*n-1):
        a1,b1 = input().split()
        a1,b1 = int(a1),int(b1)
        if a1 in mp1.keys():
            mp1[a1] += 1
        else :
            mp1[a1] = 1
        if b1 in mp2.keys():
            mp2[b1] += 1
        else :
            mp2[b1] = 1
    for x in mp1:
        if mp1[x] & 1 :
            a1 = x
            break
    for y in mp2:
        if mp2[y] & 1:
            b1 = y
            break
    print(a1,b1)
