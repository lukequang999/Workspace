from math import *
def CheckN1(N):
    if(N > 0):
        return True
    else: return False
def CheckN2(N):
    if(N != 0):
        return True
    else: return False
N = int(input("N = "))
if(CheckN1(N) == True):
    print("N thoa man dieu kien N > 0")
else: print("N khong thoa man dieu kien N >0")
if(CheckN2(N) == True):
    print("N thoa man dieu kien N khac 0")
else: print("N khong thoa man dieu kien khac 0")
        