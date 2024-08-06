def sum_of_divisors(n):
    total = 0
    for i in range(1, n):
        if n % i == 0:
            total += i
    return total

# Example usage
n = int(input("Enter a positive integer: "))
print("Sum of divisors less than", n, "is:", sum_of_divisors(n))
