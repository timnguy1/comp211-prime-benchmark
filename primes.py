def is_prime(n):
    if n < 2:
        return False

    i = 2
    while i <= n // i:
        if n % i == 0:
            return False
        i += 1

    return True


limit = 1000000
count = 0

for n in range(2, limit + 1):
    if is_prime(n):
        count += 1

print("Primes found:", count)
