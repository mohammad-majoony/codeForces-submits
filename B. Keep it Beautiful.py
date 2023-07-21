class Linked :
    def __init__(self) :
        self.first = None ;
        self.last = None ;
        self.count = 0 ;
        
    def add(self , value) :
        newNode = Node(value , None , None)
        if self.count == 0 :
            self.first = newNode
            self.last = newNode
        else :
            newNode.pervius = self.last
            self.last.next = newNode
            self.last = newNode
            
        self.count += 1
        
    def remove(self , node) :
        pNode = node.pervius
        nNode = node.next
        
        if node == self.last == self.first :
            self.first = self.last = None
            
        elif node == self.last :
            pNode.next = None
            self.last = pNode
            
        elif node == self.first :
            nNode.pervius = pNode
            self.first = nNode
        else :
            pNode.next = nNode
            nNode.pervius = pNode
        
        self.count -= 1
        
class Node :
    def __init__(self , value , perviusNode , nextNode) :
        self.value = value
        self.next = nextNode
        self.pervius = perviusNode


for _ in range(int(input())) :
    
    length = int(input())
    nums = list(map(int,input().split()))
    
    if length < 3 : 
        print("".join( ["1" for x in range(length)] ))
        continue
         
    li = Linked()
    
    for num in nums : li.add(num)
    
    if li.first.value > li.first.next.value :
        minimum = li.first.next.value
        maximum = li.first.value
        flag = False
    else :
        minimum = float("-inf")
        maximum = li.first.value
        flag = True
    
    res = [1 , 1] + [0 for x in range(length - 2)]
    node = li.first.next.next 
    index = -1
    
    while node != None :
        index += 1
        if index < 2 : continue
        if flag :
            if node.value >= node.pervius.value :
                res[index] = 1
                node = node.next
            else :
                if minimum <= node.value <= maximum :
                    flag = False
                    res[index] = 1
                    minimum = node.value
                    node = node.next
                else :
                    node = node.next
                    if node == None : break
                    li.remove(node.pervius)
                
        else :
            if minimum <= node.value <= maximum :
                res[index] = 1
                minimum = node.value
                node = node.next
            else :
                node = node.next
                if node == None : break
                li.remove(node.pervius)
                
    for n in res : print(n , end="")
    print(end="\n")