
class Node:     # class for creating node
    def __init__(self, data):
       self.data = data   # Data and Address of next node   
       self.next = None

    def get_element(self):      #for getting the elements
            return self.data

    def set_element(self,num):
            self.data=num   

class Stack:
    
    def __init__(self):
        self.head = None
 
    def push(self, data):       # push/adding elements in stack
        if self.head is None:
            self.head = Node(data)
        else:
            new_node = Node(data)
            new_node.next = self.head
            self.head = new_node
 
    def search(self):   # for searching the elements in a stack
            n=input("Enter Student :")
            tmp=self.head
            while tmp != None:
                if(n==tmp.get_element()):
                    print("Student Found")
                    break
                tmp=tmp.next
            else:
                    print("Student not found")
    
    def pop(self):     # for deleting the elements from stack
        if self.head is None:
            return None
        else:
            popped = self.head.data
            self.head = self.head.next
            return popped

    def display(self):  # for display all contents
            tmp=self.head
            while tmp != None:
                print(tmp.get_element())
                tmp=tmp.next

a_stack = Stack()   # creating the object of a class "Stack"
while True:
    print('1. push <value>')        # Menu
    print('2. pop')
    print('3. search')
    print('4. Display')
    print('5. Exit')
    ch = int(input('What would you like to do? '))
 

    if ch == 1:
        a=input("Enter element :")
        a_stack.push(a)
    elif ch == 2:
        popped = a_stack.pop()
        if popped is None:
            print('Stack is empty.')
        else:
            print('Popped value: ', popped) #display the deleted element
    elif ch == 3:
        a_stack.search()
    
    elif ch == 4:
        a_stack.display()

    elif ch == 5:   # Exit/ close
        break

'''
OUTPUT :
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 1
Enter element :a
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 1
Enter element :b
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 1
Enter element :c
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 4
c
b
a
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 2
Popped value:  c
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 2
Popped value:  b
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do? 3
Enter Student :a
Student Found
1. push <value>
2. pop
3. search
4. Display
5. Exit
What would you like to do?
'''
