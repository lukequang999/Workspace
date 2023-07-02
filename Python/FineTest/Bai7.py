def check_same_parity(a, b, c):
    return (a % 2 == 0 and b % 2 == 0 and c % 2 == 0) or \
           (a % 2 != 0 and b % 2 != 0 and c % 2 != 0)

def main():
    try:
        a = int(input("A = "))
        b = int(input("B = "))
        c = int(input("C = "))

        if check_same_parity(a, b, c):
            print("Cung tinh chan le")
        else:
            print("Khac tinh chan le")
    except ValueError:
        print("Bạn phải nhập số nguyên.")

if __name__ == "__main__":
    main()
