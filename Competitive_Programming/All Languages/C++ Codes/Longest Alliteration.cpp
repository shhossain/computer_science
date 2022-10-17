class Solution:
   def solve(self, words):
      maxlength = 0
      curr_letter, curr_length = None, 0
      for word in words:
         if not curr_letter or curr_letter != word[0]:
            maxlength = max(maxlength, curr_length)
            curr_letter, curr_length = word[0], 1
         else:
            curr_length += 1
      return max(maxlength, curr_length)   
