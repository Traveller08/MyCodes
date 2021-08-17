def rev(s):
    return s[::-1]
lines = []
while True:
    line = input()
    if line:
        lines.append(line)
    else:
        break
text = '\n'.join(lines)
ans=rev(lines)
print(lines)
