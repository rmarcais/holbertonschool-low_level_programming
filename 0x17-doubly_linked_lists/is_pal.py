#!/usr/bin/python3
def palnb():
    tmp = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            n=i*j
            temp=n
            rev=0
            while(n>0):
                dig=n%10
                rev=rev*10+dig
                n=n//10
            if(temp==rev and temp > tmp):
                tmp = temp
    print(tmp)
palnb()
