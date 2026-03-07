#Welcome + affichage menu

print("Bienvenue sur MégaFinance")
menu = ("d : ajouter une dépense - r : ajouter un revenus - m : ajouter une dépense maximale - a : afficher l'argent - q : quitter")
print(menu)

#Demander le choix

choix = input("Entrez votre choix : ").lower()

#Création de variable

montant = 0
d_Max = None

while choix != "q":
#Les actions du programme
    
    if choix == "d": #ajout d'une dépense
        try:
            depense = float(input("Votre dépense : "))
            while depense < 0:
                print("Une dépense ne peut pas être négative, réessayer : ")
                depense = float(input("Votre dépense : "))
            montant = montant - depense
            if d_Max is None or depense > d_Max :
                d_Max = depense
        except ValueError:
            print("Veuilliez entrer un nombre valide : ")    
            
    elif choix == "r": #ajout d'un revenus
        try:
            revenus = float(input("Vos revenus : "))
            while revenus < 0:
                print("Un revenus ne peut pas être négatif, réessayer : ")
                revenus = float(input("Vos revenus : "))
            montant = montant + revenus
        except ValueError:
            print("Veuilliez entrer un nombre valide : ") 


    elif choix == "m": #afficher la dépense maximale
        if d_Max is None:
            print("Aucune dépense d'enregistrer")
        else:
            print("Votre dépense max est de : ", d_Max)

            
    elif choix == "a": #Affiche le montant disponible
        print("Le montant disponible est de : ", montant)

        
    print(menu)
    choix = input("Entrez votre choix : ").lower()

    
print("Goodbye !")

   
