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

        
    def delLast(self):
        """
        Code to delete last node of Linkend List
        """
        h=self.head
        while h.nxt.nxt:
            h=h.nxt
        del h.nxt
        h.nxt=None
    def Print(self):
        h=self.head
        while h:
            print(h.val,end=' -> ')
            h=h.nxt
        print('NULL')
    

a=[10,20,40,80,6]
ll=LL()
for i in a:
    ll.insert_node(i)
ll.Print()
ll.delLast()
ll.Print()
