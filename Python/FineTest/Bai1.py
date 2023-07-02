def is_triangle(a, b, c):
    return a + b > c and a + c > b and b + c > a

def main():
    try:
        a = int(input("A = "))
        b = int(input("B = "))
        c = int(input("C = "))
        
        if is_triangle(a, b, c):
            print("Dung la tam giac")
        else:
            print("Khong phai tam giac")
    except ValueError:
        print("Bạn phải nhập số nguyên.")

if __name__ == "__main__":
    main()
