import bisect

def lengthOfLIS(nums):
    if not nums:
        return 0
    tails = []
    for num in nums:
        # Find the position where num can be inserted
        pos = bisect.bisect_left(tails, num)
        if pos == len(tails):
            tails.append(num)
        else:
            tails[pos] = num
    return len(tails)

def minimumSortCost(arr):
    n = len(arr)
    if n <= 1:
        return 0
    lisLength = lengthOfLIS(arr)
    minCost = n - lisLength
    return minCost

def main():
    n = int(input().strip())

    sf = [""] * n
    oor = [""] * n

    # Read and ignore the first line if needed
    first_line = input().strip()

    # Read n strings for sf array
    for i in range(n):
        sf[i] = input().strip()

    # Read and ignore the next line if needed
    second_line = input().strip()

    # Read n strings for oor array
    for i in range(n):
        oor[i] = input().strip()

    # Create order array by finding positions
    order = []
    for i in range(n):
        j = 0
        while j < n and sf[i] != oor[j]:
            j += 1
        if j < n:  # Found the string
            order.append(j + 1)

    # Create fo array with consecutive sequences
    fo = []
    i = 0
    while i < len(order):
        current = order[i]
        # Find consecutive sequence
        while i + 1 < len(order) and order[i + 1] == order[i] + 1:
            i += 1
        fo.append(current)
        i += 1
        if i >= len(order):
            break

    print(minimumSortCost(fo))

if __name__ == "__main__":
    main()