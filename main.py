from datetime import datetime


def f(i):
    b = 3
    c = 3
    if i == 0: return 0
    x = 0
    for n in range(1, 100000001):
        x += b * 2 + c - i
    return x + f(i - 1)


if __name__ == "__main__":
    start = datetime.now()
    f(1)
    print(datetime.now() - start)
