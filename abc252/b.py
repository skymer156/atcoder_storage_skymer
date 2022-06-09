N, K = list(map(int, input().split()))
A = list(map(int, input().split()))
B = list(map(int, input().split()))

AA = max(A)

maxvalue = AA

flag: bool = False

for index in B:
    if A[index-1] == maxvalue:
        flag = True


if flag:
    print("Yes")
else:
    print("No")