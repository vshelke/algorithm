stack = []
serving = {}
b = 0
n = int(raw_input())
while n:
    s = raw_input().split(" ")
    if s[0] == '1':
        stack.append(int(s[1]))
    else:
        serving[stack.pop()] = b
        b = b + 1
    n = n - 1
for i in serving:
    print serving[i],