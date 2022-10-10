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

        
    def search(self,x):
        """
        To search whether given element is in LinkedList or not
        """
        if not self.head:
            return "Not Found"
        
        h=self.head
        while h.nxt:
            if h.val==x:
                return "Found"
            h=h.nxt
        return "Not Found"

a=[10,20,40,80,6]
ll=LL()
for i in a:
    ll.insert_node(i)
print(ll.search(80))

