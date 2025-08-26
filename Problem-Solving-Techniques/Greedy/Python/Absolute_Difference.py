a = [4, 1, 8, 7]
b = [2, 3, 6, 5]

a.sort()
b.sort()

min_diff = 0

for i in range(len(a)):
    min_diff += abs(a[i] - b[i])

print("min absolute value is :", min_diff)
