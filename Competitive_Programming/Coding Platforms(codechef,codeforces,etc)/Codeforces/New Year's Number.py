for t in range(int(input())):
    n = int(input())
    cnt_2021 = n % 2020
    cnt_2020 = (n - cnt_2021) / 2020 - cnt_2021
    if cnt_2020 >= 0 and (2020 * cnt_2020) + (2021 * cnt_2021) == n:
        print("YES")
    else:
        print("NO")
