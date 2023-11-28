"""
/* REMOVE DUPLICATES FROM THE SORTED ARRAY
 * =======================================
 * You are given a sorted integer array of size n
 *
 * Remove the duplicated from the array such that each element appears only once.
 *
 * Return the length of this new array.
 *
 * NOTE:
 * DONT allocate an extra space for a another array. YOu need to do this by
 * modifying the given input array in place with O(1) space complexity.
 *
 * EXAMPLE:
 * inputs: 10, [1,2,2,3,3,3,4,4,5,5]
 * output: 5
 *
 * inputs: 9, [1,1,2,3,3,4,5,5,5]
 * output: 5
 *
 * Expected time complexity is O(n)
 */
"""

def remove_duplicates(arr, size):
  return len(set(arr))


if __name__ == "__main__":
  unique_elements = remove_duplicates([1,1,2,3,3,4,5,5,5], 9)

  print(f"Total no of unique elements: {unique_elements}")
