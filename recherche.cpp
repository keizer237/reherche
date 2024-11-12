#include <stdio.h>

char* cherche_char(const char *chaine, char caractere) {
    int i = 0; // Initialiser un index pour parcourir la chaîne

    // Parcourir la chaîne jusqu'à la fin
    while (chaine[i] != '\0') {
        if (chaine[i] == caractere) {
            // Retourner l'adresse du caractère trouvé
            return (char*)&chaine[i];
        }
        i++; // Passer au caractère suivant
    }

    // Retourner NULL si le caractère n'est pas trouvé
    return NULL;
}

int main() {
    const char *texte = "bienvenue"; // Chaîne de test
    char caractere = 't'; // Caractère à chercher
    char *resultat = cherche_char(texte, caractere); // Appeler la fonction

    if (resultat) {
        // Afficher la position du caractère trouvé
        printf("Caractère trouvé à la position : %ld\n", resultat - texte);
    } else {
        printf("Caractère non trouvé\n"); // Indiquer si le caractère n'a pas été trouvé
    }

    return 0;
}