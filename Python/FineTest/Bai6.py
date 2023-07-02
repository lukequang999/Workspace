def check_opposite_signs(a, b, c):
    return (a < 0 and b > 0) or (a > 0 and b < 0) or \
           (a < 0 and c > 0) or (a > 0 and c < 0) or \
           (b < 0 and c > 0) or (b > 0 and c < 0)

def main():
    try:
        a = int(input("A = "))
        b = int(input("B = "))
        c = int(input("C = "))

        if check_opposite_signs(a, b, c):
            print("Co cap so trai dau")
        else:
            print("Khong co cap so trai dau")
    except ValueError:
        print("Bạn phải nhập số nguyên.")

if __name__ == "__main__":
    main()
