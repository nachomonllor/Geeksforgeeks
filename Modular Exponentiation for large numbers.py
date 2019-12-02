http://www.practice.geeksforgeeks.org/problem-page.php?pid=401

#code

t = int(raw_input())

for k in range(0, t) :
    input = raw_input().split(" ")
    A = int(input[0])
    B = int(input[1])
    C = int(input[2])
    
    print (A**B)%C
