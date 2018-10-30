#1002 写出这个数 （20 分）
#读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。


if __name__ == "__main__":
    name=input()
    a=[]
    for n in name:
        a.append(int(n))
    b=sum(a)
    c=list(map(int, str(b)));
    py={'1':'yi','2':'er','3':'san','4':'si','5':'wu','6':'liu',
        '7':'qi','8':'ba','9':'jiu','0':'ling'}
    d=[]
    for i in c:
        d.append(py[str(i)])
    e=" ".join(str(i) for i in d)
    print(e)       

#######################################################################################################

from functools import reduce
if __name__ == "__main__":
    st = list(input())
    ss = reduce(lambda x,y:x+y,[int(i) for i in st])
 
    out = list(str(ss))
    out2 = ["ling","yi","er","san","si","wu","liu","qi","ba","jiu"]
    out3 = []
 
    for num in out:
        inx = int(num)
        out3.append(out2[inx])
    print(" ".join(out3))

#######################################################################################################

if __name__ == "__main__":
    a = []
    for n in list(input()):
        a.append(int(n))
    c = list(map(int, str(sum(a))))
    py = ["ling","yi","er","san","si","wu","liu","qi","ba","jiu"]
    d=[]
    for i in c:
        d.append(py[i])
    print(" ".join(str(i) for i in d))
   


