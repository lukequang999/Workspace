def is_non_repeating_k_order(binary_string, k):
    n = len(binary_string)

    for i in range(n - k):
        substring1 = binary_string[i:i+k]
        substring2 = binary_string[i+k:i+2*k]

        if substring1 == substring2:
            return True

    return False

binary_string = input("S = ")
k = int(input("k = "))
if is_non_repeating_k_order(binary_string, k):
    print(f"Day lap bac {k}")
else:
    print(f"Day khong lap")
