

def sumeElementePare(list):
    contor = 0
    for i in list:
        if i % 2 == 0:
            contor = contor + 1
    print("Numar elemente pare:",contor)

def ElementeNuleMatrice(mat):
    contor = 0
    for i in range(len(mat)):
        for j in range(len(mat[i])):
            if mat[i][j] == 0:
                contor+=1
    print("Numar elemente nule:",contor)

def sortareLiniiMatrice(mat):
    for linie in range(len(mat)):
        mat[linie].sort(reverse=True)
    print("Matricea sortata:",mat)

#metoda scaderilor repetate

def CMMDC(a, b):
    while (a != b):
        if a > b:
            a -= b  # a=a-b
        else:
            b -= a;  # b=b-a
    print("CMMDC=",a);

def ultimaCerinta(n):
    suma=0
    invers = 0
    ePalindrom = False
    clona = n
    while clona!=0:
        cifra = clona%10
        invers = invers*10 + cifra
        suma+=cifra
        clona = clona//10
    print("Suma =",suma)
    print("Invers =",invers)
    if(invers == n):
        ePalindrom = True
    print("Palindrom?",ePalindrom)

lista = [1,2,3,4,5,6,7,8,9,10]
sumeElementePare(lista)
mat = [[1,0,3],[4,5,6],[7,8,0]]
ElementeNuleMatrice(mat)
sortareLiniiMatrice(mat)
CMMDC(100,75)
ultimaCerinta(123321)