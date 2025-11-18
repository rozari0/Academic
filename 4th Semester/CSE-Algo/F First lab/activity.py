n = int(input("How many activities? "))

activities = []
for _ in range(n):
    s = int(input("Start: "))
    f = int(input("Finish: "))
    activities.append((s, f))

activities.sort(key=lambda x: x[1])

selected = []
current_finish = 0

for s, f in activities:
    if s >= current_finish:
        selected.append((s, f))
        current_finish = f

print(selected)
