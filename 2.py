s1=input()
s2=input()
l=len(s2)
c=s2[l-1]
co=0;
for i in range(0,len(s1)):
  if(s1[i]==c):
    co=co+1
print(co)
