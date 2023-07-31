text = input()
if text.isupper() :
    print(text.lower())
elif text[0:1].islower() and (text[1:].isupper() or len(text) == 1) : 
    print(text.capitalize())
else : print(text)