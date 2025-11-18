def fractional_knapsack(values, weights, capacity):
    data = {
        "Value": values,
        "Weight": weights,
        "Ratio": [],
    }

    length = len(weights)
    profit = 0

    for i in range(length):
        data["Ratio"].append(data["Value"][i] / data["Weight"][i])

    for i in range(length - 1):
        for j in range(0, length - i - 1):
            if data["Ratio"][j] < data["Ratio"][j + 1]:
                data["Ratio"][j], data["Ratio"][j + 1] = (
                    data["Ratio"][j + 1],
                    data["Ratio"][j],
                )
                data["Weight"][j], data["Weight"][j + 1] = (
                    data["Weight"][j + 1],
                    data["Weight"][j],
                )
                data["Value"][j], data["Value"][j + 1] = (
                    data["Value"][j + 1],
                    data["Value"][j],
                )

    for i in range(length):
        if capacity == 0:
            break

        if capacity < data["Weight"][i]:
            profit += capacity * data["Ratio"][i]
            capacity = 0
        else:
            capacity -= data["Weight"][i]
            profit += data["Value"][i]

    return profit


n = int(input("Enter number of items: "))
values = []
weights = []

for i in range(n):
    v = float(input(f"Enter value of item {i + 1}: "))
    w = float(input(f"Enter weight of item {i + 1}: "))
    values.append(v)
    weights.append(w)

capacity = float(input("Enter knapsack capacity: "))

max_profit = fractional_knapsack(values, weights, capacity)
print(f"Maximum Profit: {max_profit}")
