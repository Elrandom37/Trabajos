def suma(num1, num2):
    return num1 + num2

def resta(num1, num2):
    return num1 - num2

def multiplicacion(num1, num2):
    return num1 * num2

def division(num1, num2):
    if num2 == 0:
        return "Error: no se puede dividir por cero"
    else:
        return num1 / num2

print("Calculadora simple")
print("1. Suma")
print("2. Resta")
print("3. Multiplicación")
print("4. División")

opcion = int(input("Elija una opción (1/2/3/4): "))

num1 = float(input("Ingrese el primer número: "))
num2 = float(input("Ingrese el segundo número: "))

if opcion == 1:
    resultado = suma(num1, num2)
    print("El resultado de la suma es:", resultado)
elif opcion == 2:
    resultado = resta(num1, num2)
    print("El resultado de la resta es:", resultado)
elif opcion == 3:
    resultado = multiplicacion(num1, num2)
    print("El resultado de la multiplicación es:", resultado)
elif opcion == 4:
    resultado = division(num1, num2)
    print("El resultado de la división es:", resultado)
else:
    print("Opción no válida")
    