def calcular_precio_final():
    precio_original = float(input("Introduce el precio original del artículo: "))
    descuento = 0.15
    precio_final = precio_original * (1 - descuento)
    print(f"El precio final después del descuento es: {precio_final:.2f}")

calcular_precio_final()
