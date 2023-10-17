def two_sum(nums: List[int], target: int) -> List[int]:
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
