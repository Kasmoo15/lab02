Début

distance_y = 10
distance_x = 3
l1 = 1
s1 = 5 
s2 = 2 
old_time = 100

POUR i = 1 À 20

    l1 = i

    CALCULER côté_adjacent = distance_y - l1

    CALCULER l2 = √((côté_adjacent**2) + (distance_x**2))

    CALCULER temps_l1 = l1 / s1
    CALCULER temps_l2 = l2 / s2
    CALCULER temps_total = temps_l1 + temps_l2

    SI old_time < temps_total ALORS
        temps_total = old_time
    SINON
        old_time = temps_total
    FIN SI

FIN POUR

final_time = old_time

PRINT "Le temps final sera de " + final_time + " heure"

Fin








