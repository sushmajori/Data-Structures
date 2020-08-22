  
# for Garbage collection 
import gc 

# A complete working Python program to demonstrate all 
# insertion methods 
  
# A linked list node 
class Node: 
  
    # Constructor to create a new node 
    def __init__(self, data): 
        self.data = data 
        self.next = None
        self.prev = None
  
# Class to create a Doubly Linked List 
class DoublyLinkedList: 
  
    # Constructor for empty Doubly Linked List 
    def __init__(self): 
        self.head = None
  
    # Given a reference to the head of a list and an 
    # integer, inserts a new node on the front of list 
    def insertBegin(self, new_data): 
  
        # 1. Allocates node 
        # 2. Put the data in it 
        new_node = Node(new_data) 
  
        # 3. Make next of new node as head and 
        # previous as None (already None) 
        new_node.next = self.head 
  
        # 4. change prev of head node to new_node 
        if self.head is not None: 
            self.head.prev = new_node 
  
        # 5. move the head to point to the new node 
        self.head = new_node 
  
    # Given a node as prev_node, insert a new node after 
    # the given node 
    def insertAfter(self, prev_node, new_data): 
  
        # 1. Check if the given prev_node is None 
        if prev_node is None: 
            print("the given previous node cannot be NULL")
            return 
  
        # 2. allocate new node 
        # 3. put in the data 
        new_node = Node(new_data) 
  
        # 4. Make net of new node as next of prev node 
        new_node.next = prev_node.next
  
        # 5. Make prev_node as previous of new_node 
        prev_node.next = new_node 
  
        # 6. Make prev_node ass previous of new_node 
        new_node.prev = prev_node 
  
        # 7. Change previous of new_nodes's next node 
        if new_node.next is not None: 
            new_node.next.prev = new_node 
  
    # Given a reference to the head of DLL and integer, 
    # appends a new node at the end 
    def insertEnd(self, new_data): 
  
        # 1. Allocates node 
        # 2. Put in the data 
        new_node = Node(new_data) 
  
        # 3. This new node is going to be the last node, 
        # so make next of it as None 
        new_node.next = None
  
        # 4. If the Linked List is empty, then make the 
        # new node as head 
        if self.head is None: 
            new_node.prev = None
            self.head = new_node 
            return 
  
        # 5. Else traverse till the last node 
        last = self.head 
        while(last.next is not None): 
            last = last.next
  
        # 6. Change the next of last node 
        last.next = new_node 
  
        # 7. Make last node as previous of new node 
        new_node.prev = last 
  
        return
  
    # This function prints contents of linked list 
    # starting from the given node 
    def printList(self): 
  
        print("\nData in the Linked List : \n")
        temp = self.head 
        while (temp): 
            print(temp.data) 
            temp = temp.next
        
    def linearsearch(self,key):
        temp=self.head
        while temp!=None:
            if temp.data==key:
                print("\n%d is found in Linked List" %key)
                return
            temp=temp.next
        print("\n%d is not found in Linked List" %key)


    def Minimun(self):
        min=self.head.data
        tmp=self.head
        while tmp!=None:
            if tmp.data<min:
                min=tmp.data
            tmp=tmp.next
        print("\nManimum Number in Linked List : ",min)


    
    def Maximun(self):
        max=0
        tmp=self.head
        while tmp!=None:
            if tmp.data>max:
                max=tmp.data
            tmp=tmp.next
        print("\nMaximum Number in Linked List : ",max)



    def Swap(self):
        print("\nData in the Linked List : \n")
        temp = self.head 
        while (temp): 
            print(temp.data) 
            temp = temp.next
        a1=int(input("\nEnter first number from above to swap : "))
        b1=int(input("\nEnter second number from above to swap : "))
        tmp=self.head
        while tmp!=None:
            if tmp.data==a1:
                tmp.data=b1
                tmp=tmp.next
            elif tmp.data==b1:
                tmp.data=a1
                tmp=tmp.next
            else:
                tmp=tmp.next
   
        print("\nData in the Linked List After Swap : \n")
        temp = self.head 
        while (temp): 
            print(temp.data) 
            temp = temp.next
    
    def size(self):
        size=0
        temp=self.head
        while temp != None:
            size+=1
            temp=temp.next
        return size
    
    # Function to delete a node in a Doubly Linked List. 
   # head_ref --> pointer to head node pointer. 
   # dele --> pointer to node to be deleted 
  
    def deleteNode(self, dele): 
        if self.head==None:
            print("\nEmpty Linked List")
            return
        if self.head.next==None:
            if self.head.data==dele:
                self.head=None
                print("\nDelete the Node Successfully")
                return

        tmp=self.head
        while tmp!=None:
            if self.head.data==dele:
                self.head=tmp.next
                self.head.prev=None
                print("\nDelete the Node Successfully")
            elif tmp.data==dele:
                if tmp.next==None:
                    curr.next=None
                    print("\nDelete the Node Successfully")

                else:
                    curr.next=tmp.next
                    tmp.next.prev=curr
                    print("\nDelete the Node Successfully")

            curr=tmp
            tmp=tmp.next
                
        # Call python garbage collector 
        gc.collect() 
  
# Driver program to test above functions 
  

while True:
    try:
        print("\n")
        print("--"*60)
        print("\n1.Create Linked List : ")
        print("\n2.Inset Node at Begining :")
        print("\n3.Inset Node at End :")
        print("\n4.Inset Node After a Node :")
        print("\n5.Delete a Specified Node :")
        print("\n6.Linear Search :")
        print("\n7.Size of Linked List : ")
        print("\n8.Display All Nodes Data of Linked List : ")
        print("\n9.Minimun Number in Linked Lists : ")
        print("\n10.Maximun Number in Linked Lists : ")
        print("\n11.Swap the elements in Linked List : ")
        print("\n12.Exit :")

        ch=int(input("\nEnter Your Choice : \n"))
        if ch==1:
            DoublyLinkedList=DoublyLinkedList()
        elif ch==2:
            data=int(input("\nEnter Data for Inserting : \n"))
            DoublyLinkedList.insertBegin(data)
        elif ch==3:
            data=int(input("\nEnter Data for Inserting : \n"))
            DoublyLinkedList.insertEnd(data)
        elif ch==4:
            data=int(input("\nEnter Data for Inserting : \n"))
            #prev=int(input("\nEnter Data for Inserting After that Node : \n"))
            #prev_node=Node(prev)
            DoublyLinkedList.insertAfter(LinkedList.head,data)
        elif ch==5:
            data=int(input("\nEnter Data for Deleting : \n"))
            DoublyLinkedList.deleteNode(data)
        elif ch==6:
            #LinkedList.sorting()
            key=int(input("\nEnter Key for Searching : \n"))
            DoublyLinkedList.linearsearch(key)
        elif ch==7:
            size=DoublyLinkedList.size()
            print("\nSize of a Linked List is %d" %size)

        elif ch==8:
            DoublyLinkedList.printList()
        elif ch==9:
            DoublyLinkedList.Minimun()
        elif ch==10:
            DoublyLinkedList.Maximun()
        elif ch==11:
            DoublyLinkedList.Swap()
        elif ch==12:
            break
        else:
            print("\nWrong Choice")
    except:
        continue
