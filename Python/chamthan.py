def calculate_sum(n):
    total = 0
    sign = 1

    for i in range(1, n + 1):
        term = 1
        for j in range(2, i + 1):
            term *= j
        total += sign * term
        sign *= -1
    
    return total

def main():
    try:
        n = int(input("Nhập số nguyên dương n: "))
        if n <= 0:
            print("Vui lòng nhập số nguyên dương.")
            return
        result = calculate_sum(n)
        print(f"Tổng S = 1 - 1*2 + 1*2*3 - ... + (-1)^(n-1)*1*2*...n là: {result}")
    except ValueError:
        print("Vui lòng nhập một số nguyên dương.")

if __name__ == "__main__":
    main()
