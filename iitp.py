'''
The first line contains one integer t (1≤t≤100) – the number of queries.
The first line of each query contains three integers b, p and f (1≤b, p, f≤100) — the number of buns, beef patties and chicken cutlets in your restaurant.
The second line of each query contains two integers h and c (1≤h, c≤100) — the hamburger and chicken burger prices in your restaurant.
'''

t=int(input())
L=[]
for i in range(t):
    
    s1=input()
    s2=input()

    A=s1.split(" ")
    B=s2.split(" ")

    b=int(A[0]) #no. of buns
    p=int(A[1]) #no. of beef patties
    f=int(A[2]) #no. of chicken

    #prices
    h=int(B[0]) #hamburgur
    c=int(B[1]) #chicken

    if t>=1 and t<=100 and b>=1 and b<=100 and f>=1 and f<=100 and p>=1 and p<=100 and h>=1 and h<=100 and c>=1 and c<=100:
        x=b
        y=p+f

        if x>y:
            burgurs=y
        else:
            burgurs=x
        
        if h>c and burgurs>p:
            price=p*h+(burgurs-p)*c
        elif h<c and burgurs>f:
            price=c*f+(burgurs-f)*h
        elif h>c and burgurs<p:
            price= burgurs*h
        elif h<c and burgurs<f:
            price= burgurs*c
        elif h==c:
            price= burgurs*c
            
        L.append(price)

for i in L:
    print(i)    
    
    

'''
3
15 2 3
5 10
7 5 2
10 12
1 100 100
100 100

40
74
100
'''

