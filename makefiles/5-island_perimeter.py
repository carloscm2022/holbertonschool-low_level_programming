#!/usr/bin/python3
""" Perímetro del método de la isla """


def island_perimeter(cuadrícula):
    """ Devuelve el perímetro de la isla """
    recuento = 0
    para i en rango(len(cuadrícula)):
        para j en rango(len(cuadrícula[i])):
            if grid[i][j] == 1:
                si i - 1 < 0 o cuadrícula[i - 1][j] == 0:
                    contar += 1
                si j + 1 > (len(grid[i]) - 1) o grid[i][j + 1] == 0:
                    contar += 1
                si i + 1 > (len(cuadrícula) - 1) o cuadrícula[i + 1][j] == 0:
                    contar += 1
                si j - 1 < 0 o cuadrícula[i][j - 1] == 0:
                    contar += 1
    recuento de devoluciones
