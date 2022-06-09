def getindexfromcnt(cntlist):
    index = 0
    maxvalue = 0
    for i, cnt in enumerate(cntlist):
        if cnt >= maxvalue:
            maxvalue = cnt
            index = i

    return index


def calc_cost(number, inputS):
    cost = 0
    cnt = [0 for _ in range(10)]

    for i in range(len(inputS[0])):
        for j in range(len(inputS)):
            if int(inputS[j][i]) == number:
                cnt[i] += 1

    maxcnt = max(cnt)
    maxindex = getindexfromcnt(cnt)
    if maxcnt >= 2:
        cost = 10 * (maxcnt - 1) + maxindex
    else:
        cost = maxindex

    return cost


def main():
    n = int(input())
    S = []
    for _ in range(n):
        S.append(input())

    costs = []
    for i in range(10):
        costs.append(calc_cost(i, S))

    mincost = min(costs)
    print(mincost)


if __name__ == '__main__':
    main()
