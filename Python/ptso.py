def count_partitions(N, k):
    if N == 0 and k == 0:
        return 1
    if N <= 0 or k <= 0:
        return 0
    count = 0
    for i in range(1, N + 1):
        count += count_partitions(N - i, k - 1)
    return count

def main():
    try:
        N = int(input("Nhập số nguyên dương N: "))
        if N <= 0:
            print("Vui lòng nhập số nguyên dương.")
            return
        ways = count_partitions(N, 4)
        print(f"Số cách phân tích {N} thành tổng của đúng 4 số nguyên dương là: {ways}")
    except ValueError:
        print("Vui lòng nhập một số nguyên dương.")

if __name__ == "__main__":
    main()
