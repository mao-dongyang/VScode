data = [(1, 5), (3, 6), (2, 4), (6, 18)]


def gcd(a, b):
    r = a % b
    while r != 0:
        a = b
        b = r
        r = a % b
    return b


