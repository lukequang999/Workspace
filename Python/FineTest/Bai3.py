def remove_exclamation_marks(input_string):
    return input_string.replace("!", "")

def main():
    try:
        S = input("Nhap S: ")
        result = remove_exclamation_marks(S)
        print("Chuoi S sau khi loai bo dau cham than:", result)
    except Exception as e:
        print("Đã có lỗi xảy ra:", e)

if __name__ == "__main__":
    main()
