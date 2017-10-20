def f(n):
	x=5
	if x<n:
		print ("number greater than 5")
		def f_2():
			pass
		f_2()
	elif x>n-10:
		print ("number greater than -5")
	else:
		print ("number less than 5")


def g(value):
	if value == 0:
		if n>0:
			print("value is zero and n is greater than 0")
		elif n > -10:
			print("value is zero and n is greater than -10 and less than 0")
		else:
			print("value is zero and n is less than -10")
		print ("value is 0")
	elif value == 1:
		print ("value is 1")
	elif value==2:
		print ("value is 2")
	else:
		print("value is not among 0, 1 and 2")
