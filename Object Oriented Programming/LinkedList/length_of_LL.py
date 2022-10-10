class node:
    def __init__(self,val,nxt=None):
        self.val=val
        self.nxt=nxt

class LL:
    def __init__(self,head=None):
        self.head=head

        
    def insert_node(self,x):
        if not self.head:
            self.head=node(x)
            return
        h=self.head
        while h.nxt:
            h=h.nxt
        h.nxt=node(x)

        
    def findLen(self):
        """
        To find the length of Linked List
        """
        if not self.head:
            return 0
        l=1
        h=self.head
        while h.nxt:
            h=h.nxt
            l+=1
        return l
    

a=[10,20,40,80,6]
ll=LL()
for i in a:
    ll.insert_node(i)
print(ll.findLen())

