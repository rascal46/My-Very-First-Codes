def computepay(h, r):
    h = float(h)
    r = float(r)
    if h>40:
        x = (40 * r) + (h-40) * (3/2) * r
    return x

h = input("Enter Hours:")
r = input("Enter Rate:")

p = computepay(h , r)
print("Pay", p)
