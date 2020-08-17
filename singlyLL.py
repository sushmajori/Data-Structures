"""
Python program for linklist to perform following operation:
1.Create Linked List : 

2.Inset Node at Begining :

3.Inset Node at End :

4.Inset Node After a Node :

5.Delete a Specified Node :

6.Sort the Linked List :

7.Binary Search :

8.Linear Search :

9.Size of Linked List : 

10.Display All Nodes Data of Linked List : 

11.Minimun Number in Linked Lists : 

12.Maximun Number in Linked Lists : 

13.Swap the elements in Linked List : 

14.Exit :
"""

# Node class 
class Node: 
  
    # Function to initialise the node object 
    def __init__(self, data): 
        self.data = data  # Assign data 
        self.next = None  # Initialize next as null 
  
  
# Linked List class contains a Node object 
class LinkedList: 
  
    # Function to initialize head 
    def __init__(self): 
        self.head = None
  
    # This function prints contents of linked list 
    # starting from head 
    def printList(self): 
        print("\nData in the Linked List : \n")
        temp = self.head 
        while (temp): 
            print(temp.data) 
            temp = temp.next
    # This function is in LinkedList class 
    # Function to insert a new node at the beginning 
    def insertBegin(self, new_data): 
    
        # 1 & 2: Allocate the Node & 
        #        Put in the data 
        new_node = Node(new_data) 
        if self.head ==None:

            # 3. Make next of new Node as head 
            self.head = new_node
            return
        new_node.next=self.head
        # 4. Move the head to point to new Node  
        self.head = new_node
    # Inserts a new node after the given prev_node. This method is  
    # defined inside LinkedList class shown above */ 
    def insertAfter(self, prev_node, new_data): 
    
        # 1. check if the given prev_node exists 
        if prev_node is None: 
            print("The given previous node must in LinkedList.")
            return
    
        #  2. Create new node & 
        #  3. Put in the data 
        new_node = Node(new_data) 
    
        # 4. Make next of new Node as next of prev_node  
        new_node.next = prev_node.next
    
        # 5. make next of prev_node as new_node  
        prev_node.next = new_node
        print("\n%d is Inserted" %new_data)
    
    # This function is defined in Linked List class 
    # Appends a new node at the end.  This method is 
    #  defined inside LinkedList class shown above */ 
    def insertEnd(self, new_data): 
        
        # 1. Create a new node 
        # 2. Put in the data 
        # 3. Set next as None 
        new_node = Node(new_data) 
        
        # 4. If the Linked List is empty, then make the 
        #    new node as head 
        if self.head is None: 
                self.head = new_node 
                print("\n%d is Inserted" %new_data)
                return
        
        # 5. Else traverse till the last node 
        last = self.head 
        while (last.next): 
            last = last.next
        
        # 6. Change the next of last node 
        last.next =  new_node
        print("\n%d is Inserted" %new_data)
    
    def deleteNode(self, key): 
          
        # Store head node 
        temp = self.head 
        if temp==None:
            self.head=None
        # If head node itself holds the key to be deleted 
        if (temp is not None): 
            if (temp.data == key): 
                self.head = temp.next
                temp = None
                print("\n%d is Deleted" %key)
                return
  
        # Search for the key to be deleted, keep track of the 
        # previous node as we need to change 'prev.next' 
        while(temp is not None): 
            if temp.data == key: 
                break 
            prev = temp 
            temp = temp.next 
  
        # if key was not present in linked list 
        if(temp == None): 
            return 
  
        # Unlink the node from linked list 
        prev.next = temp.next 
  
        temp = None 
        print("\n%d is Deleted" %key)
    def size(self):
        size=0
        temp=self.head
        while temp != None:
            size+=1
            temp=temp.next
        return size
        
    def sorting(self):
        size=self.size()
        
        for i in range(size):
            temp=self.head
            size1=size
            while temp !=None and size1!=1:
                
                if temp.data>temp.next.data:
                    temp1=temp.data
                    temp.data=temp.next.data
                    temp.next.data=temp1
                size1-=1
                temp=temp.next
        
    def binarysearch(self,key):
        size=self.size()
        low=0
        high=size-1
        mid=0
        while low<=high:
            mid=(low+high)//2
            temp=self.head
                
            for i in range(mid+1):
                temp=temp.next
            if temp.data==key:
                print("\n%d is found in Linked List" %key)
                return
            else:
                if temp.data>key:
                    high=mid-1
                else:
                    low=mid+1
            #print("**")
        print("\n%d is not found in Linked List" %key)
                
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
        



while True:
    try:
        print("\n")
        print("--"*60)
        print("\n1.Create Linked List : ")
        print("\n2.Inset Node at Begining :")
        print("\n3.Inset Node at End :")
        print("\n4.Inset Node After a Node :")
        print("\n5.Delete a Specified Node :")
        print("\n6.Sort the Linked List :")
        print("\n7.Binary Search :")
        print("\n8.Linear Search :")
        print("\n9.Size of Linked List : ")
        print("\n10.Display All Nodes Data of Linked List : ")
        print("\n11.Minimun Number in Linked Lists : ")
        print("\n12.Maximun Number in Linked Lists : ")
        print("\n13.Swap the elements in Linked List : ")
        print("\n14.Exit :")

        ch=int(input("\nEnter Your Choice : \n"))
        if ch==1:
            LinkedList=LinkedList()
        elif ch==2:
            data=int(input("\nEnter Data for Inserting : \n"))
            LinkedList.insertBegin(data)
        elif ch==3:
            data=int(input("\nEnter Data for Inserting : \n"))
            LinkedList.insertEnd(data)
        elif ch==4:
            data=int(input("\nEnter Data for Inserting : \n"))
            #prev=int(input("\nEnter Data for Inserting After that Node : \n"))
            #prev_node=Node(prev)
            LinkedList.insertAfter(LinkedList.head,data)
        elif ch==5:
            data=int(input("\nEnter Data for Deleting : \n"))
            LinkedList.deleteNode(data)
        elif ch==6:
            LinkedList.sorting()
        elif ch==7:
            LinkedList.sorting()
            key=int(input("\nEnter Key for Searching : \n"))
            LinkedList.binarysearch(key)
        elif ch==8:
            #LinkedList.sorting()
            key=int(input("\nEnter Key for Searching : \n"))
            LinkedList.linearsearch(key)
        elif ch==9:
            size=LinkedList.size()
            print("\nSize of a Linked List is %d" %size)

        elif ch==10:
            LinkedList.printList()
        elif ch==11:
            LinkedList.Minimun()
        elif ch==12:
            LinkedList.Maximun()
        elif ch==13:
            LinkedList.Swap()
        elif ch==14:
            break



        else:
            print("\nWrong Choice")
    except:
        continue
