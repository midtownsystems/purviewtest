def factorial(n):
    """Calculate the factorial of a number n."""
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

# Ask the user for input
number = int(input("Enter a number to calculate its factorial: "))

# Ensure the number is non-negative
if number < 0:
    print("Please enter a non-negative integer.")
else:
    print(f"The factorial of {number} is {factorial(number)}")