def calculate_sum_of_squares(N):
    return N * (N + 1) * (2 * N + 1) // 6

N = int(input("N = "))
result = calculate_sum_of_squares(N)
print(f"P({N}) =",result)