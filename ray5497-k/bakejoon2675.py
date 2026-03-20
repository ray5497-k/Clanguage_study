T =input()
su = int(T)

for i in range(su):
    s = input()
    sp =s.split()
    string = ""
    for j in sp[1]:
        string = string + (j * int(sp[0])) 
        
    print(string)
   
