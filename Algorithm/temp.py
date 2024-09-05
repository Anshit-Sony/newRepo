def naive_string_matching(T, P):
    n = len(T)
    m = len(P)
    indices = []
    
    for i in range(n - m + 1):
        j = 0
        while j < m and T[i + j] == P[j]:
            j += 1
        if j == m:
            indices.append(i)
    
    return indices if indices else -1

T = input("Enter the text: ")
P = input("Enter the pattern: ")

result = naive_string_matching(T, P)

if result == -1:
    print(-1)
else:
    print(",".join(map(str, result)))