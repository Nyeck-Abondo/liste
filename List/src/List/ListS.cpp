#include "ListS.h"
#include <iostream>
#include <string>

// ============================================================================
// FONCTIONS DE CRÉATION ET DESTRUCTION
// ============================================================================

ListeSimple* AllocateSimple()
{
    // ALGORITHME :
    // 1. Allouer dynamiquement une structure ListeSimple
    ListeSimple* list = (ListeSimple*)malloc(sizeof(ListeSimple));

    if (list == nullptr) return nullptr;

    // 2. Initialiser tous les champs (tete, queue à NULL, taille à 0, etc.)
    // Initialiser(list);
    list->estAllouee = true;
    list->estCirculaire = false;
    list->queue = nullptr;
    list->tete = nullptr;
    list->taille = 0;

    // 3. Retourner le pointeur vers la liste allouée
    return list;
}

ListeSimple CreerSimple()
{
    // ALGORITHME :
    // 1. Déclarer une variable ListeSimple
    // 2. Initialiser tous les champs (tete, queue à NULL, taille à 0, etc.)
    // 3. Retourner la liste
    ListeSimple liste;
    liste.tete = nullptr;
    liste.queue = nullptr;
    liste.taille = 0;
    liste.estAllouee = true;
    liste.estCirculaire =false;

    return liste;
}

NoeudS* CreerNoeudS(int valeur)
{
    // ALGORITHME :
    // 1. Allouer dynamiquement un nœud
    NoeudS* noeud = (NoeudS*)malloc(sizeof(NoeudS));

    if (noeud == nullptr) return nullptr;

    // 2. Initialiser donnee avec la valeur
    noeud->donnee = valeur;

    // 3. Initialiser suivant à NULL
    noeud->suivant = nullptr;

    // 4. Retourner le pointeur vers le nœud
    return noeud;
}

void Initialiser(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // if (liste == nullptr) return;

    // 2. Si la liste contient des éléments, les supprimer tous
    // 3. Réinitialiser tous les champs (tete, queue à NULL, taille à 0, etc.)
}

void Nettoyer(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Parcourir tous les nœuds de la liste et les supprimer un par un
    // 3. Réinitialiser tete et queue à NULL, taille à 0
    // 4. Conserver les autres propriétés (estCirculaire, estAllouee)
}

void Detruire(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Appeler Nettoyer pour supprimer tous les nœuds
    // 3. Si la liste était allouée dynamiquement, libérer la mémoire de la structure
}

// ============================================================================
// FONCTIONS D'INSERTION
// ============================================================================

void InsererDebut(ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer un nouveau nœud avec la valeur
    // 3. Si la liste est vide :
    //    - tete et queue pointent vers le nouveau nœud
    //    - Si la liste est circulaire, le suivant pointe vers lui-même
    // 4. Sinon :
    //    - Le suivant du nouveau nœud pointe vers l'ancienne tête
    //    - Mettre à jour tete pour pointer vers le nouveau nœud
    //    - Si la liste est circulaire, mettre à jour queue->suivant
    // 5. Incrémenter la taille
}

void InsererFin(ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer un nouveau nœud avec la valeur
    // 3. Si la liste est vide :
    //    - Appeler InsererDebut ou initialiser tete et queue
    // 4. Sinon :
    //    - Ancienne queue->suivant pointe vers le nouveau nœud
    //    - Mettre à jour queue pour pointer vers le nouveau nœud
    //    - Si la liste est circulaire, queue->suivant pointe vers tete
    // 5. Incrémenter la taille
}

bool InsererApres(ListeSimple* liste, NoeudS* precedent, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et precedent
    // 2. Si precedent est NULL ou liste vide, retourner false
    // 3. Créer un nouveau nœud avec la valeur
    // 4. Nouveau nœud->suivant = precedent->suivant
    // 5. precedent->suivant = nouveau nœud
    // 6. Si precedent était la queue, mettre à jour queue
    // 7. Incrémenter la taille
    // 8. Retourner true
    return false;
}

bool InsererAvant(ListeSimple* liste, NoeudS* suivant, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et suivant
    // 2. Si suivant est NULL ou liste vide, retourner false
    // 3. Si suivant est la tête, utiliser InsererDebut
    // 4. Sinon :
    //    - Trouver le nœud précédent de suivant
    //    - Utiliser InsererApres avec le précédent trouvé
    // 5. Retourner true si réussi, false sinon
    return false;
}

bool InsererPosition(ListeSimple* liste, int position, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position > taille, retourner false
    // 3. Si position == 0, utiliser InsererDebut
    // 4. Si position == taille, utiliser InsererFin
    // 5. Sinon :
    //    - Parcourir la liste jusqu'au nœud à position-1
    //    - Utiliser InsererApres avec ce nœud
    // 6. Retourner true
    return false;
}

void InsererTrie(ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou valeur <= tête->donnee, utiliser InsererDebut
    // 3. Si valeur >= queue->donnee, utiliser InsererFin
    // 4. Sinon :
    //    - Parcourir la liste jusqu'à trouver la position d'insertion
    //    - Insérer à cette position en maintenant l'ordre croissant
}

// ============================================================================
// FONCTIONS DE SUPPRESSION
// ============================================================================

bool SupprimerDebut(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide et si liste non vide
    // 2. Sauvegarder l'ancienne tête dans un pointeur temporaire
    // 3. Si un seul élément :
    //    - tete et queue deviennent NULL
    // 4. Sinon :
    //    - tete devient ancienne tête->suivant
    //    - Si circulaire, mettre à jour queue->suivant
    // 5. Détruire l'ancienne tête
    // 6. Décrémenter la taille
    // 7. Retourner true
    return false;
}

bool SupprimerFin(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide et si liste non vide
    // 2. Si un seul élément, utiliser SupprimerDebut
    // 3. Sinon :
    //    - Trouver l'avant-dernier nœud (précédent de queue)
    //    - Détruire le nœud queue
    //    - Mettre à jour queue pour pointer vers l'avant-dernier
    //    - queue->suivant = NULL (ou tete si circulaire)
    // 4. Décrémenter la taille
    // 5. Retourner true
    return false;
}

bool SupprimerNoeud(ListeSimple* liste, NoeudS* cible)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et cible
    // 2. Si cible est tête, utiliser SupprimerDebut
    // 3. Si cible est queue, utiliser SupprimerFin
    // 4. Sinon :
    //    - Trouver le nœud précédent de cible
    //    - précédent->suivant = cible->suivant
    //    - Détruire cible
    // 5. Décrémenter la taille
    // 6. Retourner true
    return false;
}

bool SupprimerValeur(ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Rechercher la première occurrence de la valeur
    // 3. Si trouvée, utiliser SupprimerNoeud avec le nœud trouvé
    // 4. Retourner true si suppression effectuée, false sinon
    return false;
}

int SupprimerToutesOccurrences(ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Initialiser un compteur à 0
    // 3. Parcourir la liste et supprimer chaque occurrence de la valeur
    // 4. Pour chaque suppression réussie, incrémenter le compteur
    // 5. Retourner le compteur
    return -1;
}

bool SupprimerPosition(ListeSimple* liste, int position)
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

NoeudS* RechercherValeur(const ListeSimple* liste, int valeur)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Parcourir la liste du début à la fin
    // 3. Pour chaque nœud, comparer donnee avec valeur
    // 4. Si trouvé, retourner le pointeur du nœud
    // 5. Si fin de liste atteinte, retourner NULL
    return nullptr;
}

NoeudS** RechercherToutesOccurrences(const ListeSimple* liste, int valeur, int* count)
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

NoeudS* ObtenirNoeudPosition(const ListeSimple* liste, int position)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si position < 0 ou position >= taille, retourner NULL
    // 3. Parcourir la liste jusqu'à la position demandée
    // 4. Retourner le pointeur vers le nœud à cette position
    return nullptr;
}

NoeudS* TrouverPrecedent(const ListeSimple* liste, const NoeudS* cible)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste et cible
    // 2. Si cible est tête, retourner NULL
    // 3. Parcourir la liste avec deux pointeurs : courant et precedent
    // 4. Quand courant == cible, retourner precedent
    // 5. Si cible non trouvée, retourner NULL
    return nullptr;
}

// ============================================================================
// FONCTIONS D'INFORMATION
// ============================================================================

std::string ToString(const NoeudS* noeud)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur noeud est valide
    // 2. Convertir noeud->donnee en string
    // 3. Retourner la string formatée : "[valeur]"
    return "";
}

std::string ToString(const ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide, retourner "[]"
    // 3. Parcourir tous les nœuds et construire une string
    // 4. Format : "[v1] -> [v2] -> ... -> [vn]" 
    // 5. Si circulaire, ajouter "-> [tête]" à la fin
    return "";
}

int CompterElements(const ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Retourner simplement liste->taille
    return -1;
}

bool EstVide(const ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Retourner vrai si liste->tete == NULL ou liste->taille == 0
    if (liste != nullptr){
        if (liste->tete == nullptr || liste->taille == 0){
            return true;
        }
    }
    return false;
}

bool ContientCycle(const ListeSimple* liste)
{
    // ALGORITHME (Lièvre et Tortue) :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste vide ou un seul élément, retourner false
    // 3. Initialiser deux pointeurs : lent (tête) et rapide (tête->suivant)
    // 4. Tant que rapide != NULL et rapide->suivant != NULL :
    //    - Si lent == rapide, cycle détecté -> retourner true
    //    - lent avance d'un pas, rapide avance de deux pas
    // 5. Retourner false si fin de liste atteinte
    if (liste != nullptr){
        if (EstVide(liste) || liste->taille == 0)
        {
            /* code */
        }
        
    }
    
    return false;
}

// ============================================================================
// FONCTIONS DE CONVERSION ET TRANSFORMATION
// ============================================================================

void RendreCirculaire(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste non vide et pas déjà circulaire :
    //    - queue->suivant = tete
    //    - liste->estCirculaire = true
}

void RendreLineaire(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste circulaire :
    //    - queue->suivant = NULL
    //    - liste->estCirculaire = false
}

void Inverser(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Initialiser trois pointeurs : prev=NULL, curr=tete, next=NULL
    //    - Tant que curr != NULL :
    //        next = curr->suivant
    //        curr->suivant = prev
    //        prev = curr
    //        curr = next
    //    - Échanger tete et queue
}

void Trier(ListeSimple* liste)
{
    // ALGORITHME (Tri par insertion recommandé) :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Initialiser une liste triée vide
    //    - Pour chaque élément de la liste originale :
    //        Insérer dans la liste triée à la bonne position
    //    - Remplacer la liste originale par la liste triée
}

ListeSimple* Copier(const ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Créer une nouvelle liste vide
    // 3. Parcourir la liste originale et insérer chaque élément dans la nouvelle
    // 4. Copier également les propriétés (estCirculaire)
    // 5. Retourner la nouvelle liste
    return nullptr;
}

void Concatener(ListeSimple* liste1, const ListeSimple* liste2)
{
    // ALGORITHME :
    // 1. Vérifier les pointeurs liste1 et liste2
    // 2. Si liste2 vide, ne rien faire
    // 3. Si liste1 vide, copier liste2 dans liste1
    // 4. Sinon :
    //    - liste1->queue->suivant = liste2->tete
    //    - liste1->queue = liste2->queue
    //    - liste1->taille += liste2->taille
    //    - Si liste1 circulaire, mettre à jour queue->suivant
}

void Diviser(ListeSimple* liste, int position, ListeSimple* liste2)
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
    // 9. Mettre à jour les tailles des deux listes
}

// ============================================================================
// FONCTIONS UTILITAIRES AVANCÉES
// ============================================================================

void SupprimerDoublonsTries(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Si liste a au moins 2 éléments :
    //    - Parcourir la liste avec un pointeur courant
    //    - Comparer chaque élément avec le suivant
    //    - Si égaux, supprimer le suivant
    //    - Sinon, avancer
}

void SupprimerDoublonsNonTries(ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Pour chaque élément, vérifier les éléments suivants
    // 3. Supprimer tous les doublons trouvés
    // 4. Alternative : utiliser un tableau/hashset pour meilleure performance
}

ListeSimple* FusionnerListesTriees(const ListeSimple* liste1, const ListeSimple* liste2)
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

NoeudS* TrouverMilieu(const ListeSimple* liste)
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

bool EstPalindrome(const ListeSimple* liste)
{
    // ALGORITHME :
    // 1. Vérifier si le pointeur liste est valide
    // 2. Trouver le milieu de la liste
    // 3. Inverser la seconde moitié de la liste
    // 4. Comparer la première moitié avec la seconde moitié inversée
    // 5. Re-inverser la seconde moitié pour restaurer la liste originale
    // 6. Retourner true si toutes les comparaisons sont égales
    return false;
}