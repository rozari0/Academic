def selection_sort(array):
    i = 0
    length = len(array)

    while i < length - 1:
        minimum = i
        j = i + 1
        while j < length:
            if array[minimum] > array[j]:
                minimum = j
            j += 1
        array[i], array[minimum] = array[minimum], array[i]
        i += 1

    return array


array = list(map(int, input("Input numbers: ").split()))
array = selection_sort(array)
print(f"Sorted Array: {array}")
