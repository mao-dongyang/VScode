data = [(1, 5), (3, 6), (2, 4), (6, 18)]


def gcd(a, b):
    r = a % b
    while r != 0:
        a = b
        b = r
        r = a % b
    return b


def simplify(pair):
    n1, n2 = pair[0], pair[1]
    m = gcd(n1, n2)
    return (int(n1/m), int(n2/m))


res = map(simplify, data)
res = list(res)
print(res)
