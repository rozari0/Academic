def bubble_sort(array):
    i = 0
    length = len(array)

    while i < length - 1:
        is_swapped = False
        j = 0
        while j < length - i - 1:
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
                is_swapped = True
            j += 1

        if not is_swapped:
            break

        i += 1

    return array


array = list(map(int, input("Input numbers: ").split()))
sorted_array = bubble_sort(array)
print("Sorted number:", sorted_array)
