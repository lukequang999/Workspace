import math
def F(N):
    result = 0.0
    for k in range(1, N + 1):
        total_sum = sum(range(1, k + 1))
        result += pow(total_sum, 1/k)
    return result

def main():
    try:
        N = int(input("N = "))
        if N <= 0:
            print("N sai.")
        else:
            value = F(N)
            N2 = str(N) 
            print("F({})"" = {:.7f}".format(N,value))
    except ValueError:
        print("N sai.")

if __name__ == "__main__":
    main()
