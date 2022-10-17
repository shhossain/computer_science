# Question Link: https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        
        cur = head
        prev = None
        parent = []
        
        while cur or parent:
            
            if cur is None:
                cur = parent.pop()
                prev.next = cur
            
            if cur.child:
                if cur.next:
                    parent.append(cur.next)
                cur.next = cur.child
                cur.child = None
                
            cur.prev = prev
            prev = cur
            cur = cur.next
                
        return head