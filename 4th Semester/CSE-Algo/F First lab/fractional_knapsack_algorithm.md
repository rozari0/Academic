# Algorithm: Fractional Knapsack (Greedy Approach)

**Input:**  
- `n` → number of items  
- `Value[i]` → value of item *i*  
- `Weight[i]` → weight of item *i*  
- `capacity` → maximum weight the knapsack can hold  

**Output:**  
- `profit` → maximum total value (can include fractions of items)

---

## Steps

1. **Initialize:**
   - Set `profit = 0`
   - Create an array `Ratio[i] = Value[i] / Weight[i]` for each item.

2. **Sort items by ratio (descending order):**
   - Use **bubble sort** to arrange items so that `Ratio[0] ≥ Ratio[1] ≥ ... ≥ Ratio[n-1]`.
   - When swapping ratios, also swap corresponding values and weights to keep data aligned.

3. **Select items greedily:**
   - For each item `i` from 0 to `n-1`:
     - If `capacity == 0`, **stop** (knapsack is full).
     - If `Weight[i] ≤ capacity`:
       - Add full item:  
         `profit = profit + Value[i]`
       - Decrease capacity:  
         `capacity = capacity - Weight[i]`
     - Else (item doesn’t fit fully):
       - Take fraction of the item:  
         `profit = profit + capacity * Ratio[i]`
       - Set `capacity = 0` (knapsack full)
       - **Stop**

4. **Output `profit`** as the maximum total value that can be carried.

---

## Complexity Analysis

- **Time Complexity:**
  - Ratio computation: `O(n)`
  - Bubble sort: `O(n²)`
  - Greedy selection: `O(n)`
  - **Total:** `O(n²)`
- **Space Complexity:** `O(n)` (for storing ratios)

---

**Summary:**  
Compute ratios → Sort by value/weight → Fill greedily until full → Return profit.
