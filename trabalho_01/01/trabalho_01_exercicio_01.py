import timeit

n = 0
print "Digite um numero positivo inteiro: "
while n <= 0 or not isinstance(n, (int, long)):
    n = input()
    if n <= 0 or not isinstance(n, (int, long)):
        print "n deve ser inteiro positivo!"


def divisores(ipt):
    """Retorna os divisores de um numero"""
    divisores = []
    for i in range(1, ipt+1):
        if ipt % i == 0:
            divisores.append(i)

    return divisores


def process(ipt):
    """Dado um numero inteiro positivo n,
    verifica se a soma dos digitos de n e primo"""

    soma = 0
    for digito in str(ipt):
        soma += long(digito)
    print "A soma e", soma
    d = divisores(soma)
    print "os divisores sao", d
    if len(d) == 2:
        print soma, "e primo! Quem diria!!"
    else:
        print soma, "NAO e primo! Quem diria!!"


s = timeit.default_timer()
process(n)
print("Executado em "+str((timeit.default_timer() - s )*1000.0) + " milissegundos")
