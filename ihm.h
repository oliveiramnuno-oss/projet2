/* ihm.h */
#ifndef IHM_H
#define IHM_H

#include "types.h"

void lire_entrees_clavier(Entrees *entrees);
void reinitialiser_entrees(Entrees *entrees);
int choisir_option_menu(void);
void saisir_pseudo(char pseudo[]);

#endif
