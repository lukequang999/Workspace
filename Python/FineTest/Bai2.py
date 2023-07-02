def F(N):
    total = 0.0
    sum_terms = 0

    for i in range(1, N + 1):
        sum_terms += i
        total += (sum_terms)**0.5

    return total

def main():
    try:
        N = int(input("N = "))
        if N <= 0:
            print("N phải là số nguyên dương.")
        else:
            result = F(N)
            print(f"F({N}) = {result:.7f}")
    except ValueError:
        print("Bạn phải nhập số nguyên dương.")

if __name__ == "__main__":
    main()
