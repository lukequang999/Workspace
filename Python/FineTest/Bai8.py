def F(N):
    result = 0.0
    for i in range(1, N+1):
        for j in range(1, i+1):
            result += N / (j**2)
    return result

def main():
    try:
        N = int(input("Nhập số nguyên dương N: "))
        if N <= 0:
            print("Vui lòng nhập số nguyên dương N.")
        else:
            value = F(N)
            print("Giá trị hàm F(N) với N =", N, "là: {:.7f}".format(value))
    except ValueError:
        print("Vui lòng nhập một số nguyên dương.")

if __name__ == "__main__":
    main()
