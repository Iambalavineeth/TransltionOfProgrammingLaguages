def multiples(n):
    for i in range(1,n):
        for j in range(1,n):
            for k in range(1,n):
                print(i*j)
    print("\n")

def onefor():
    for i in range(10):
        print(i)

def forlist():
    nums = [range(10)]
    for num in nums:
        print(num)
