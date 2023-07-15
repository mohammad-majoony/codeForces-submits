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
    li = Linked() 
    text = input()
    for num in text : li.add(num)
    
    if len(text) == 1 : print("NET")
    else :
        count = 0
        iter = li.first.next
        while(iter != None) :
            if iter != li.first and iter.value != iter.pervius.value :
                count += 1
                li.remove(iter)
                li.remove(iter.pervius)
            
            iter = iter.next
        print("DA" if count % 2 == 1 else "NET")