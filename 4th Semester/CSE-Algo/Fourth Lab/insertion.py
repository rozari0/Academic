def insertion_sort(array):
    i = 1
    length = len(array)
    while i < length:
        key = array[i]
        j = i - 1

        while j >= 0 and array[j] > key:
            array[j + 1] = array[j]
            j -= 1

        array[j + 1] = key
        i += 1

    return array


array = list(map(int, input("Input numbers: ").split()))
array = insertion_sort(array)
print(f"Sorted Array: {array}")
