def main():
    try:
        N = int(input("Nhap N: "))
        if N <= 0:
            print("N phải là số nguyên dương.")
            return

        A, B, C = [], [], []

        for i in range(N):
            value = input(f"Nhap gia tri thu {i+1}: ")
            try:
                value_int = int(value)
                A.append(value_int)
            except ValueError:
                try:
                    value_float = float(value)
                    B.append(value_float)
                except ValueError:
                    C.append(value)

        A.sort(reverse=True)
        B.sort(reverse=True)
        C.sort(reverse=True)

        print("A =", A)
        print("B =", B)
        print("C =", C)
    except ValueError:
        print("Bạn phải nhập số nguyên dương.")

if __name__ == "__main__":
    main()
