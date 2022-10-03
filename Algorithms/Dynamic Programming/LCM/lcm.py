import gc


def lcm(a, b):
    def gcd(a,b):
        while b:
            a,b = b,a%b
        return a
    return a*b//gcd(a,b)
if __name__ == '__main__':
    a, b = map(int, input().split())
    print(lcm(a, b))

