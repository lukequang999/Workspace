def AddChamThan(S):
    while len(S) < 3 or S[-3:] != "!!!":
        S += "!"
    return S

def main():
    S = input("Nhap S: ")
    S = S.strip()
    S = AddChamThan(S)
    print("Chuoi S sau khi xu ly:", S)

if __name__ == "__main__":
    main()
