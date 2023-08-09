for _ in range(int(input())) :
    lenght = int(input())
    text = input()
    stack = []
    for let in text :
        if len(stack) == 0 or not (let == ")" and stack[-1] == "(") : stack.append(let)
        else : stack.pop()
        
    right = 0
    left = 0
    
    for let in stack :
        if let == "(" : right += 1
        else : left += 1
    print(min(right  , left))