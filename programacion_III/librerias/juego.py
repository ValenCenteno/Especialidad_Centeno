<<<<<<< HEAD
import random

def cargar():
    lista=[]
    for x in range(10):
        lista.append(random.randint(0,1000))
    return lista


def imprimir(lista):
    print(lista)    


def mezclar(lista):
    random.shuffle(lista)
    

# bloque principal

lista=cargar()
print("Lista generada aleatoriamente")
imprimir(lista)
mezclar(lista)
print("La misma lista luego de mezclar")
=======
import random

def cargar():
    lista=[]
    for x in range(10):
        lista.append(random.randint(0,1000))
    return lista


def imprimir(lista):
    print(lista)    


def mezclar(lista):
    random.shuffle(lista)
    

# bloque principal

lista=cargar()
print("Lista generada aleatoriamente")
imprimir(lista)
mezclar(lista)
print("La misma lista luego de mezclar")
>>>>>>> d7a9094dcadb62dbd04aad0bb35fa6dc671cbcf4
imprimir(lista)