/* affichage.h */
#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include "types.h"

void initialiser_affichage(void);
void afficher_fond_niveau(int numeroNiveau);
void afficher_interface(char pseudo[], int score, int tempsRestant, int numeroNiveau);
void dessiner_joueur(Joueur joueur);
void dessiner_bulles(Bulle bulles[], int nbBulles);
void dessiner_projectiles(Projectile projectiles[], int nbProjectiles);
void dessiner_boss(Boss boss);
void afficher_niveau(Joueur joueur, Bulle bulles[], int nbBulles,
                     Projectile projectiles[], int nbProjectiles, Boss boss, int afficherBoss);
void afficher_victoire_niveau(void);
void afficher_defaite_niveau(void);
void afficher_victoire_finale(void);
void afficher_ecran_reprise(void);

#endif
