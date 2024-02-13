def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def simplify_fraction(a, b):
    divisor = gcd(a, b)
    return a // divisor, b // divisor

numerator = int(input("Введите числитель: "))
denominator = int(input("Введите знаменатель: "))

simplified_numerator, simplified_denominator = simplify_fraction(numerator, denominator)

print(f"Сокращенная дробь: {simplified_numerator}/{simplified_denominator}")
