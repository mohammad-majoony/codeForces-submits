for _ in range(int(input())) :
    text = list(input())
    length = len(text)
    ab = 0
    ba = 0
    for index in range(length - 1) :
        letter = text[index] + text[index + 1]
        if letter == "ab" : ab += 1
        elif letter == "ba" : ba += 1
        
    if ab > ba :
        if text[-2] + text[-1] == "ab" : text[-1] = 'a'
        elif text[0] + text[1] == "ab" : text[0] = 'b'
        elif text[-2] + text[-1] == "bb" : text[-1] = 'a'
        elif text[0] + text[1] == "aa" : text[0] = 'b'
        
    elif ba > ab :
        if text[-2] + text[-1] == "ba" : text[-1] = 'b'
        elif text[0] + text[1] == "ba" : text[0] = 'a'
        elif text[0] + text[1] == "bb" : text[0] = 'a'
        elif text[-2] + text[-1] == "aa" : text[-1] = 'b'
        
    print("".join(text))