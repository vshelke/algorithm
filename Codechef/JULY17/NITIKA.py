t = int(raw_input())
while t:
    tmp = raw_input().split(" ")
    l = len(tmp)
    if l == 1:
        print tmp[0].capitalize()
    elif l == 2:
        print tmp[0][0].upper() + ". " + tmp[1].capitalize()
    elif l == 3:
        print tmp[0][0].upper() + ". " + tmp[1][0].upper() + ". " + tmp[2].capitalize()
    t = t - 1