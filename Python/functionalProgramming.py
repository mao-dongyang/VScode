import random as rd
import time as tm
from multiprocessing import Pool as pl


data = [(rd.randint(1, 1000), rd.randint(1, 1000)) for _ in range(10000000)]


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


start = tm.clock()

#p = pl(4)
#res = p.map(simplify, data)
res = map(simplify, data)
res = list(res)

finish = tm.clock()

print(res[0:10])
print("Time used : ", finish-start)
