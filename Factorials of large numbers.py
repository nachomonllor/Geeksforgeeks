http://www.practice.geeksforgeeks.org/problem-page.php?pid=355

#code
t = int(raw_input())

for k in range(0, t) :
    N = int(raw_input())
    
    prod = 1
    for i in range(2, N + 1):
        prod *= i
    print prod
