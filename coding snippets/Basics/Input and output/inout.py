'''
input() is used for taking user input
print() is used for printing the output
'''

# integer variable
a = int(input("Enter a number: "))
print(a)

# float variable
d = float(input("Enter a float number: "))
print(d)


# string variable
b = input("Enter a string: ")
print(b)


# boolean variable
c = input("Enter a boolean value: ")
print(c)


# complex variable
e = input("Enter a complex number: ")
print(e)

# list variable
# list comprehension for taking integer list as input
f = [int(i) for i in input("Enter a list of numbers: ").split()]
print(f)
# tuple variable
# tuple comprehension for taking integer tuple as input
g = (int(i) for i in input("Enter a tuple of numbers: ").split())

# dictionary variable
# dictionary comprehension for taking dictionary as input


# set variable
i = {1, 2, 3, 4, 5}

# frozenset variable
j = frozenset({1, 2, 3, 4, 5})