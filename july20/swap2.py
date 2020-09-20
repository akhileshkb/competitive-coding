t = int(input())
for i in range(t):
	n = int(input())
	a=[]
	b=[]
	c=[]
	a=input().split()
	b=input().split()
	a = list(map(int, a))
	b = list(map(int, b))
	t1,t2 = 0,0
	a.sort()
	b.sort()
	while(t1<n and t2<n):
		if(a[t1]==b[t2]):
			t1+=1
			t2+=1
		elif(a[t1]>b[t2]):
			c.append(b[t2])
			t2+=1
		else :
			c.append(a[t1])
			t1+=1
	c.extend(b[t2:])
	c.extend(a[t1:])
	a1 = min(a[0],b[0])
	sum1,flag=0,1
	# print(c)
	for i in range(0,int(len(c)/2),2):
		if(c[i]==c[i+1]):
			sum1+=min(c[i],2*a1)
		else:
			flag = 0
			break
	if flag:
		print(sum1)
	else:
		print(-1)