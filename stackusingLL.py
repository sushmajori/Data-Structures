class Node(object):
    def __init__(self, data=None):
        self.data = data
        self.next = None
    
class Stack(object):
    def __init__(self):
        self.head = Node()
    
    def add(self,data):
        new_node = Node(data)
        ptr = self.head
        while ptr.next is not None:
            ptr = ptr.next
        ptr.next = new_node
    
    def push_stack(self, data):
        ptr = self.head
        new_node = Node(data)
        new_node.next = self.head.next
        self.head.next = new_node
    
    def pop(self):
        if self.head.next is not None:
            ptr = self.head.next
            self.head.next = ptr.next
        
    def display(self):
        elems=[]
        cur_node = self.head
        while cur_node.next is not None:
            cur_node=cur_node.next
            elems.append(cur_node.data)
        print (elems)

    def find_max(self):
        elems=[]
        cur_node = self.head
        while cur_node.next is not None:
            cur_node=cur_node.next
            elems.append(cur_node.data)
        return max(elems)
        
s = Stack()
s.add(1)
s.add(3)
s.add(4)
s.add(6)
s.add(8)
s.add(2)

s.push_stack(20)
s.push_stack(10)
 
s.display()

s.pop()

s.display()

print(s.find_max())




