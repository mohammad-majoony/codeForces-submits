dictR = {
    "p" : "o" , "h" : "g" , "/" : "." ,
    "w" : "q" , "s" : "a" , "x" : "z" ,
    "e" : "w" , "d" : "s" , "c" : "x" ,
    "r" : "e" , "f" : "d" , "v" : "c" ,
    "t" : "r" , "g" : "f" , "b" : "v" ,
    "y" : "t" , "j" : "h" , "n" : "b" ,
    "u" : "y" , "k" : "j" , "m" : "n" ,
    "i" : "u" , "l" : "k" , "," : "m" ,
    "o" : "i" , ";" : "l" , "." : "," ,
}
dictL = {
    "q" : "w" , "h" : "j" , "z" : "x" ,
    "w" : "e" , "s" : "d" , "x" : "c" ,
    "e" : "r" , "d" : "f" , "c" : "v" ,
    "r" : "t" , "f" : "g" , "v" : "b" ,
    "t" : "y" , "g" : "h" , "b" : "n" ,
    "y" : "u" , "j" : "k" , "n" : "m" ,
    "u" : "i" , "k" : "l" , "m" : "," ,
    "i" : "o" , "l" : ";" , "," : "." ,
    "o" : "p" , "a" : "s" , "." : "/" ,
}
shift = input()
if shift == "L" :
    for letter in list(input()) :
        print(dictL[letter],end="") 
else :
    for letter in list(input()) :
        print(dictR[letter],end="")