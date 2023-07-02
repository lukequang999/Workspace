def Check(N,A,B):
    sum = 0
    for i in range(1,N+1):
        if((i % A == 0 and i % B != 0) or (i % A != 0 and i % B == 0)):
            sum = sum + i
    return sum
N = int(input("N = "))
A = int(input("A = "))
B = int(input("B = "))
result = Check(N,A,B)
print("Ket qua =",result)