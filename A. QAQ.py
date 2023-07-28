text = list(input())

priviousCount = []
qCount = 0 

for let in text :
    if let == "Q" :
        qCount += 1
    elif let == "A" :
        priviousCount.append(qCount)

count = 0
for num in priviousCount :
    count += num * (qCount - num)
    
print(count)