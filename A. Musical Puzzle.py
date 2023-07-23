for _ in range(int(input())) :
    length = int(input())
    text = list(input())
    melodyDict = {}
    for index in range(length - 1) :
        mel = f"{text[index]}{text[index+1]}"
        if mel not in melodyDict : melodyDict[mel] = 1
        
    print(len(melodyDict))