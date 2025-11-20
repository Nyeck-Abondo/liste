#include "ListD.h"
#include <iostream>
#include <string>

// ============================================================================
// FONCTIONS DE CRÉATION ET DESTRUCTION
// ============================================================================

ListeDouble* AllocateDouble()
{
    // ALGORITHME :
    // 1. Allouer dynamiquement une structure ListeDouble
    // 2. Initialiser tete et queue à NULL
    // 3. Initialiser taille à 0 et estCirculaire à false
    // 4. Retourner le pointeur vers la liste allouée
    return nullptr;
}

ListeDouble CreerDouble()
{
    // ALGORITHME :
    // 1. Déclarer une variable ListeDouble
    // 2. Initialiser tete et queue à NULL
    // 3. Initialiser taille à 0 et estCirculaire à false
    // 4. Retourner la liste
    return {};
}

NoeudD* CreerNoeudD(int valeur)
{
    // ALGORITHME :
    // 1. Allouer dynamiquement un nœud double
    // 2. Initialiser donnee avec la valeur
    // 3. Initialiser precedent et suivant à NULL
    // 4. Retourner le pointeur vers le nœud
    return nullptr;
}

void Initialiser(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si la liste contient des éléments, appeler Nettoyer
    // 3. Réinitialiser tous les champs (tete, queue à NULL, taille à 0, etc.)
}

void Nettoyer(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Parcourir tous les nœuds de la liste et les supprimer un par un
    // 3. Réinitialiser tete et queue à NULL, taille à 0
    // 4. Conserver la propriété estCirculaire
}

void Detruire(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Appeler Nettoyer pour supprimer tous les nœuds
    // 3. Si la liste était allouée dynamiquement, libérer la mémoire de la structure
}

// ============================================================================
// FONCTIONS D'INSERTION
// ============================================================================

void InsererDebut(ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer un nouveau nœud avec la valeur
    // 3. Si la liste est vide :
    //    - tete et queue pointent vers le nouveau nœud
    //    - Si circulaire, precedent et suivant pointent vers lui-même
    // 4. Sinon :
    //    - nouveau->suivant = tete
    //    - tete->precedent = nouveau
    //    - tete = nouveau
    //    - Si circulaire, mettre à jour queue->suivant et tete->precedent
    // 5. Incrémenter la taille
}

void InsererFin(ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer un nouveau nœud avec la valeur
    // 3. Si la liste est vide :
    //    - Appeler InsererDebut ou initialiser tete et queue
    // 4. Sinon :
    //    - nouveau->precedent = queue
    //    - queue->suivant = nouveau
    //    - queue = nouveau
    //    - Si circulaire, mettre à jour queue->suivant et tete->precedent
    // 5. Incrémenter la taille
}

bool InsererAvant(ListeDouble* liste, NoeudD* suivant, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et suivant
    // 2. Si suivant est NULL, retourner false
    // 3. Si suivant est la tête, utiliser InsererDebut
    // 4. Sinon :
    //    - Créer un nouveau nœud avec la valeur
    //    - nouveau->suivant = suivant
    //    - nouveau->precedent = suivant->precedent
    //    - suivant->precedent->suivant = nouveau
    //    - suivant->precedent = nouveau
    // 5. Incrémenter la taille
    // 6. Retourner true
    return false;
}

bool InsererApres(ListeDouble* liste, NoeudD* precedent, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et precedent
    // 2. Si precedent est NULL, retourner false
    // 3. Si precedent est la queue, utiliser InsererFin
    // 4. Sinon :
    //    - Créer un nouveau nœud avec la valeur
    //    - nouveau->precedent = precedent
    //    - nouveau->suivant = precedent->suivant
    //    - precedent->suivant->precedent = nouveau
    //    - precedent->suivant = nouveau
    // 5. Incrémenter la taille
    // 6. Retourner true
    return false;
}

bool InsererPosition(ListeDouble* liste, int position, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position > taille, retourner false
    // 3. Si position == 0, utiliser InsererDebut
    // 4. Si position == taille, utiliser InsererFin
    // 5. Sinon :
    //    - Parcourir la liste jusqu'au nœud à la position donnée
    //    - Utiliser InsererAvant avec ce nœud
    // 6. Retourner true
    return false;
}

void InsererTrie(ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou valeur <= tête->donnee, utiliser InsererDebut
    // 3. Si valeur >= queue->donnee, utiliser InsererFin
    // 4. Sinon :
    //    - Parcourir la liste depuis le début jusqu'à trouver la position d'insertion
    //    - Utiliser InsererAvant avec le nœud où valeur > nœud->donnee
    // 5. Maintenir l'ordre croissant
}

// ============================================================================
// FONCTIONS DE SUPPRESSION
// ============================================================================

bool SupprimerDebut(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide et si liste non vide
    // 2. Sauvegarder l'ancienne tête dans un pointeur temporaire
    // 3. Si un seul élément :
    //    - tete et queue deviennent NULL
    // 4. Sinon :
    //    - tete devient ancienne tête->suivant
    //    - tete->precedent = NULL (ou queue si circulaire)
    //    - Si circulaire, mettre à jour queue->suivant
    // 5. Détruire l'ancienne tête
    // 6. Décrémenter la taille
    // 7. Retourner true
    return false;
}

bool SupprimerFin(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide et si liste non vide
    // 2. Si un seul élément, utiliser SupprimerDebut
    // 3. Sinon :
    //    - Sauvegarder l'ancienne queue
    //    - queue devient ancienne queue->precedent
    //    - queue->suivant = NULL (ou tete si circulaire)
    //    - Détruire l'ancienne queue
    // 4. Décrémenter la taille
    // 5. Retourner true
    return false;
}

bool SupprimerNoeud(ListeDouble* liste, NoeudD* cible)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et cible
    // 2. Si cible est tête, utiliser SupprimerDebut
    // 3. Si cible est queue, utiliser SupprimerFin
    // 4. Sinon :
    //    - cible->precedent->suivant = cible->suivant
    //    - cible->suivant->precedent = cible->precedent
    //    - Détruire cible
    // 5. Décrémenter la taille
    // 6. Retourner true
    return false;
}

bool SupprimerValeur(ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Rechercher la première occurrence de la valeur
    // 3. Si trouvée, utiliser SupprimerNoeud avec le nœud trouvé
    // 4. Retourner true si suppression effectuée, false sinon
    return false;
}

int SupprimerToutesOccurrences(ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Initialiser un compteur à 0
    // 3. Parcourir la liste et supprimer chaque occurrence de la valeur
    // 4. Pour chaque suppression réussie, incrémenter le compteur
    // 5. Retourner le compteur
    return -1;
}

bool SupprimerPosition(ListeDouble* liste, int position)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position >= taille, retourner false
    // 3. Si position == 0, utiliser SupprimerDebut
    // 4. Si position == taille-1, utiliser SupprimerFin
    // 5. Sinon :
    //    - Parcourir jusqu'au nœud à la position donnée
    //    - Utiliser SupprimerNoeud avec ce nœud
    // 6. Retourner true
    return false;
}

// ============================================================================
// FONCTIONS DE RECHERCHE
// ============================================================================

NoeudD* RechercherValeur(const ListeDouble* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Parcourir la liste du début à la fin
    // 3. Pour chaque nœud, comparer donnee avec valeur
    // 4. Si trouvé, retourner le pointeur du nœud
    // 5. Si fin de liste atteinte, retourner NULL
    return nullptr;
}

NoeudD** RechercherToutesOccurrences(const ListeDouble* liste, int valeur, int* count)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et count
    // 2. Initialiser *count à 0
    // 3. Premier parcours : compter le nombre d'occurrences
    // 4. Allouer un tableau de pointeurs de taille (*count + 1)
    // 5. Deuxième parcours : stocker les pointeurs vers les nœuds trouvés
    // 6. Terminer le tableau par NULL
    // 7. Retourner le tableau
    return nullptr;
}

NoeudD* ObtenirNoeudPosition(const ListeDouble* liste, int position)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position >= taille, retourner NULL
    // 3. Parcourir la liste depuis le début jusqu'à la position demandée
    // 4. Retourner le pointeur vers le nœud à cette position
    return nullptr;
}

NoeudD* ObtenirNoeudPositionInverse(const ListeDouble* liste, int position)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position >= taille, retourner NULL
    // 3. Parcourir la liste depuis la fin jusqu'à la position demandée
    // 4. Utiliser les liens precedent pour remonter la liste
    // 5. Retourner le pointeur vers le nœud à cette position depuis la fin
    return nullptr;
}

// ============================================================================
// FONCTIONS D'INFORMATION
// ============================================================================

std::string ToString(const NoeudD* noeud)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur noeud est valide
    // 2. Convertir noeud->donnee en string
    // 3. Retourner la string formatée : "[valeur]"
    return "";
}

std::string ToString(const ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide, retourner "[]"
    // 3. Parcourir tous les nœuds et construire une string
    // 4. Format : "NULL <- [v1] <-> [v2] <-> ... <-> [vn] -> NULL"
    // 5. Si circulaire, remplacer NULL par références circulaires
    return "";
}

int CompterElements(const ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Retourner simplement liste->taille
    return -1;
}

bool EstVide(const ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Retourner vrai si liste->tete == NULL ou liste->taille == 0
    return false;
}

bool ContientCycle(const ListeDouble* liste)
{
    // ALGORITHME (Lièvre et Tortue) :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou un seul élément, retourner false
    // 3. Initialiser deux pointeurs : lent (tête) et rapide (tête->suivant)
    // 4. Tant que rapide != NULL et rapide->suivant != NULL :
    //    - Si lent == rapide, cycle détecté -> retourner true
    //    - lent avance d'un pas, rapide avance de deux pas
    // 5. Retourner false si fin de liste atteinte
    return false;
}

// ============================================================================
// FONCTIONS DE CONVERSION ET TRANSFORMATION
// ============================================================================

void RendreCirculaire(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste non vide et pas déjà circulaire :
    //    - queue->suivant = tete
    //    - tete->precedent = queue
    //    - liste->estCirculaire = true
}

void RendreLineaire(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste circulaire :
    //    - queue->suivant = NULL
    //    - tete->precedent = NULL
    //    - liste->estCirculaire = false
}

void Inverser(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Échanger tete et queue
    //    - Parcourir la liste et inverser tous les liens precedent/suivant
    //    - Pour chaque nœud, échanger precedent et suivant
}

void Trier(ListeDouble* liste)
{
    // ALGORITHME (Tri par insertion recommandé pour listes chaînées) :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Initialiser une liste triée vide
    //    - Pour chaque élément de la liste originale :
    //        Insérer dans la liste triée à la bonne position
    //    - Remplacer la liste originale par la liste triée
}

ListeDouble* Copier(const ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer une nouvelle liste vide
    // 3. Parcourir la liste originale et insérer chaque élément dans la nouvelle
    // 4. Copier également les propriétés (estCirculaire)
    // 5. Retourner la nouvelle liste
    return nullptr;
}

void Concatener(ListeDouble* liste1, const ListeDouble* liste2)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste1 et liste2
    // 2. Si liste2 vide, ne rien faire
    // 3. Si liste1 vide, copier liste2 dans liste1
    // 4. Sinon :
    //    - liste1->queue->suivant = liste2->tete
    //    - liste2->tete->precedent = liste1->queue
    //    - liste1->queue = liste2->queue
    //    - liste1->taille += liste2->taille
    //    - Si liste1 circulaire, mettre à jour les liens
}

void Diviser(ListeDouble* liste, int position, ListeDouble* liste2)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et liste2
    // 2. Si position < 0 ou position >= liste->taille-1, erreur
    // 3. Initialiser liste2
    // 4. Trouver le nœud à la position de division
    // 5. liste2->tete = nœud->suivant
    // 6. liste2->queue = liste->queue
    // 7. liste->queue = nœud
    // 8. nœud->suivant = NULL (ou tete si circulaire)
    // 9. liste2->tete->precedent = NULL (ou liste2->queue si circulaire)
    // 10. Mettre à jour les tailles et propriétés des deux listes
}

// ============================================================================
// FONCTIONS UTILITAIRES AVANCÉES
// ============================================================================

void SupprimerDoublonsTries(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Parcourir la liste avec un pointeur courant
    //    - Comparer chaque élément avec le suivant
    //    - Si égaux, supprimer le suivant
    //    - Sinon, avancer
}

void SupprimerDoublonsNonTries(ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Pour chaque élément, vérifier les éléments suivants
    // 3. Supprimer tous les doublons trouvés
    // 4. Alternative : utiliser un tableau/hashset pour meilleure performance
}

ListeDouble* FusionnerListesTriees(const ListeDouble* liste1, const ListeDouble* liste2)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste1 et liste2
    // 2. Créer une nouvelle liste vide
    // 3. Utiliser deux pointeurs pour parcourir les deux listes
    // 4. À chaque étape, comparer les éléments courants
    // 5. Insérer le plus petit dans la nouvelle liste
    // 6. Continuer jusqu'à épuisement des deux listes
    // 7. Retourner la nouvelle liste fusionnée
    return nullptr;
}

NoeudD* TrouverMilieu(const ListeDouble* liste)
{
    // ALGORITHME (Lièvre et Tortue) :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Initialiser deux pointeurs : lent = tete, rapide = tete
    // 3. Tant que rapide != NULL et rapide->suivant != NULL :
    //    - lent = lent->suivant
    //    - rapide = rapide->suivant->suivant
    // 4. Retourner lent (pointe vers le milieu)
    return nullptr;
}

bool EstPalindrome(const ListeDouble* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Utiliser deux pointeurs : début (tete) et fin (queue)
    // 3. Tant que début != fin et début->precedent != fin :
    //    - Si début->donnee != fin->donnee, retourner false
    //    - début = début->suivant
    //    - fin = fin->precedent
    // 4. Retourner true si toutes les comparaisons sont égales
    return false;
}

bool EchangerNoeuds(ListeDouble* liste, NoeudD* noeud1, NoeudD* noeud2)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste, noeud1, noeud2
    // 2. Si noeud1 == noeud2, retourner true (rien à faire)
    // 3. Gérer les cas spéciaux (noeuds adjacents, tête/queue)
    // 4. Mettre à jour les liens precedent et suivant des nœuds voisins
    // 5. Échanger les liens des deux nœuds
    // 6. Mettre à jour tete et queue si nécessaire
    // 7. Retourner true si échange réussi
    return false;
}

void RotationGauche(ListeDouble* liste, int k)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou k % taille == 0, ne rien faire
    // 3. k = k % taille (pour gérer k > taille)
    // 4. Trouver le nœud à la position k-1
    // 5. Nouvelle tête = nœud à position k
    // 6. Nouvelle queue = ancien nœud à position k-1
    // 7. Ajuster les liens pour maintenir la circularité si nécessaire
}

void RotationDroite(ListeDouble* liste, int k)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou k % taille == 0, ne rien faire
    // 3. k = k % taille (pour gérer k > taille)
    // 4. Rotation droite de k = rotation gauche de (taille - k)
    // 5. Appliquer RotationGauche avec (taille - k)
}