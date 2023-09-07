 
inpt = str(input())
count = 1
# Starting from 1 since a space is used from the 2nd word


for x in inpt:
    if x == " ":
        count += 1
        # count only if x is a space - indicating a new word

print(count)
