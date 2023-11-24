def two_sum_pone(nums: List[int], target: int) -> List[int]:
  """
  COMPLEXITY:
    Time complexity  : O(N)   # as we loop through the entire list
    Space complexity : O(N)   # as we create a new dict to hold the values of the list
    
  STEPS:
   - create a empty dict
   - loop through the nums list
   - find the expected value to be added to get the target value
   - check if the value is in the dict
      - if present, return the keys value and the index
      - if not present,
          - add the element to the dict as key and its index as the value
          - continue the loop
  """
  place_holder = {}

  for i, val in enumerate(nums):
    expected = target - val
    if expected in place_holder:
      return [place_holder[expected], i]

    place_holder[val] = i


def two_sum_ptwo(nums, target):
  """
  COMPLEXITY:
    Time complexity  : O(N log(N))   # as we sort the array (quick sort) & loop through array: O(N Log(N)) + O(N)
    Space complexity : O(1)          # only two var to hold the position
    
  STEPS:
   - sort the array in ascending order
   - create var to mark the positions of left & right side of the array (as we loop through)
   - until right var reaches zero loop through the elements,
      - sum = left element + right element (in sorted array)
        - if sum is lower than target, increment the left marker (so it move to next element)
        - if sum is larger than target, decrement the right marker (so it points to one element before)
        - if sum is equal to target, then that is our needed pair, return it
  """
  snums = sorted(nums)
  print(snums)
  
  lptr = 0
  rptr = len(snums) - 1
  
  while rptr >= 0:
    val = snums[lptr] + snums[rptr]

    if val == target:
      return [snums[rptr], snums[lptr]]

    if val > target:
      rptr -= 1
    else:
      lptr += 1
