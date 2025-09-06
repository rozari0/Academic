def bubble_sort(array):
    i = 0
    length = len(array)
    print(f"Input Array: A = {array}")

    while i < length - 1:
        print(f"Pass {i + 1} (i = {i})")
        is_swapped = False
        j = 0
        while j < length - i - 1:
            print(f"Compare {array[j]} with {array[j + 1]} ->", end="")
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
                print("swap ->", end="")
                is_swapped = True
            else:
                print("no swap ->", end="")
            j += 1
            print(array)

        if not is_swapped:
            break

        i += 1

    return array


array = list(map(int, input("Input numbers: ").split()))
sorted_array = bubble_sort(array)
print("Sorted number:", sorted_array)
