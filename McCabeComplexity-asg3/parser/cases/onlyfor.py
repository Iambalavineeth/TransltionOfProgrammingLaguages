for i in range(10):
  print(i)

for i in range(10):
  print(i)

for i in range(10):
  print(i)

while n < 10:
    print n
    n -= 1

def func2(n):
  x = 0
  while x < n:
    if x < 10:
      print x
    else:
      print x+10
    x += 1
  with open("x.out") as file:
      for line in file:
          print line
      if x > n:
          print "A Lot of Lines"

if True:
    print "Yes, I will be printed!"
elif True:
    print "Yes, I will also be printed!"
else:
    print "No, I will never be printed!"
