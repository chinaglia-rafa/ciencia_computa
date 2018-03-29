import timeit

n = 0
print "Digite um numero positivo inteiro: "
while n <= 0 or not isinstance(n, (int, long)):
    n = input()
    if n <= 0 or not isinstance(n, (int, long)):
        print "n deve ser inteiro positivo!"


def process(ipt):
    """Dado um numero inteiro positivo n,
    verifica se ele possui dois digitos iguais adjacentes"""

    anterior = 0
    for digito in str(ipt):
        if digito == anterior:
            print "Existem dois digitos iguais adjacentes em", ipt
            return True
        anterior = digito
    print "NAO existem dois digitos iguais adjacentes em", ipt
    return False


s = timeit.default_timer()
process(n)
print("Executado em "+str((timeit.default_timer() - s )*1000.0) + " milissegundos")
