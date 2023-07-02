def sum_of_divisors(N):
    total = 0
    i = 1

    while i * i <= N:
        if N % i == 0:
            total += i

            # Trường hợp i và N // i là hai ước số khác nhau
            if i != N // i:
                total += N // i
        i += 1

    return total

def main():
    try:
        N = int(input("N = "))
        if N <= 0:
            print("N phải là số nguyên dương.")
        else:
            result = sum_of_divisors(N)
            print(f"Tong cac uoc so cua {N} la {result}")
    except ValueError:
        print("Bạn phải nhập số nguyên dương.")

if __name__ == "__main__":
    main()
