def readFile1(fileName):
    with open(fileName) as file:
       data = file.read()
       print(data)

def readFile2(fileName):
    with open(fileName) as file:
       data = file.read()
       while True:
           print(data)
       for i in range(10):
           print(data)

def readFile3(fileName):
    with open(fileName) as file:
       data = file.read()
       while True:
           pass
       for i in range(10):
           with open(fileName) as file:
               data = file.read
               print(data)

def func1():
  for x in range(10):
    if x < 10:
      print x
    else:
      print x+10

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

# def h():
#   sum = 0
#   for x in range(3):
#     for y in range(4):
#       for z in range(5):
#         sum += z
#   return sum

func1()
func2(3)
# h()

readFile1("x.out")
readFile2("x.out")
readFile3("x.out")
