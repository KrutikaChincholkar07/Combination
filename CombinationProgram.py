# Function to calculate factorial
def factorial(num):
    fact = 1
    for i in range(1, num + 1):
        fact *= i  # multiply numbers
    return fact

# Taking input from user
n = int(input("Enter value of n: "))
r = int(input("Enter value of r: "))

# Combination formula C(n,r) = n! / (r! * (n-r)!)
result = factorial(n) // (factorial(r) * factorial(n - r))

# Display result
print("Combination C(", n, ",", r, ") =", result)
