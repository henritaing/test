#pragma once
#include <string>
using namespace std;
#include "../header/Plateau.h"
#include "../header/Case.h"
#include "../header/Terrain.h"
#include "../header/Gare.h"
#include "../header/Prison.h"
#include "../header/Communaute.h"
#include "../header/Chance.h"

Plateau::Plateau()
{
    //Création de toutes les cases
    Terrain Terrain21("Rue de la Paix", 400, 50, 200, 600, 1400, 1700, 2000, 200);
    Taxe Taxe1("Taxe de Luxe", 100);
    Terrain Terrain20("Avenue des Champs-Élysées", 350, 35, 175, 500, 1100, 1300, 1500, 200);
    Chance Chance2("Chance");
    Gare Gare3("Gare Saint Lazare", 200, 25);
    Terrain Terrain19("Boulevard des Capucins", 320, 28, 150, 450, 1000, 1200, 1400, 200);
    Communaute Communaute2("Caisse de Communauté");
    Terrain Terrain18("Avenue Foch", 300, 26, 130, 390, 900, 1100, 1275, 200);
    Terrain Terrain17("Avenue de Breteuil", 300, 26, 130, 390, 900, 1100, 1275, 200);
    Prison Prison1("Aller en prison");
    Terrain Terrain16("Rue de la Fayette", 280, 24, 120, 360, 850, 1025, 1200, 150);
    Compagnie Compagnie1("Compagnie de distribution des eaux", 150, 4);
    Terrain Terrain15("Place de la Bourse", 260, 22, 110, 330, 800, 975, 1150, 150);
    Terrain Terrain14("Faubourg Saint-Honoré", 260, 22, 110, 330, 800, 975, 1150, 150);
    Gare Gare2("Gare du Nord", 200, 25);
    Terrain Terrain13("Avenue Henri-Martin", 240, 20, 100, 300, 750, 925, 1100, 150);
    Terrain Terrain12("Boulevard Malesherbes", 220, 18, 90, 250, 700, 875, 1050, 150);
    Chance Chance1("Chance");
    Terrain Terrain11("Avenue Matignon", 220, 18, 90, 250, 700, 875, 1050, 150);
    Parc Parc("Parc gratuit");
    Terrain Terrain10("Place Pigalle", 200, 16, 80, 220, 600, 800, 1000, 100);
    Terrain Terrain9("Boulevard Saint Michel", 180, 14, 70, 200, 550, 750, 950, 100);
    Communaute Communaute1("Caisse de Communauté");
    Terrain Terrain8("Avenue Mozard", 180, 14, 70, 200, 550, 750, 950, 100);
    Gare Gare1("Gare de Lyon", 200, 25);
    Terrain Terrain7("Rue de Paradis", 160, 12, 60, 180, 500, 700, 900, 100);
    Terrain Terrain6("Avenue de Neuilly", 140, 10, 50, 150, 450, 625, 750, 100);
    Compagnie Compagnie0("Compagnie de distribution d'électricité", 150, 4);
    Terrain Terrain5("Boulevard de la Villette", 140, 10, 50, 150, 450, 625, 750, 100);
    Prison Prison0("Prison");
    Terrain Terrain4("Avenue de la République", 120, 8, 40, 100, 300, 450, 600, 50);
    Terrain Terrain3("Rue de Courcelles", 100, 6, 30, 90, 270, 400, 550, 50);
    Chance Chance0("Chance");
    Terrain Terrain2("Rue de Vaugirard", 100, 6, 30, 90, 270, 400, 550, 50);
    Gare Gare0("Gare Montparnasse", 200, 25);
    Taxe Taxe0("Impôts sur le revenu", 200);
    Terrain Terrain1("Rue Lecourbe", 60, 4, 20, 60, 180, 320, 450, 50);
    Communaute Communaute0("Caisse de Communauté");
    Terrain Terrain0("Boulevard de Belleville", 60, 2, 10, 30, 90, 160, 250, 50);
    Depart Depart("Départ");

    //Stockage éléments dans liste
    liste_cases[0] = &Depart;
    liste_cases[1] = &Terrain0;
    liste_cases[2] = &Communaute0;
    liste_cases[3] = &Terrain1;
    liste_cases[4] = &Taxe0;
    liste_cases[5] = &Gare0;
    liste_cases[6] = &Terrain2;
    liste_cases[7] = &Chance0;
    liste_cases[8] = &Terrain3;
    liste_cases[9] = &Terrain4;
    liste_cases[10] = &Prison0;
    liste_cases[11] = &Terrain5;
    liste_cases[12] = &Compagnie0;
    liste_cases[13] = &Terrain6;
    liste_cases[14] = &Terrain7;
    liste_cases[15] = &Gare1;
    liste_cases[16] = &Terrain8;
    liste_cases[17] = &Communaute1;
    liste_cases[18] = &Terrain9;
    liste_cases[19] = &Terrain10;
    liste_cases[20] = &Parc;
    liste_cases[21] = &Terrain11;
    liste_cases[22] = &Chance1;
    liste_cases[23] = &Terrain12;
    liste_cases[24] = &Terrain13;
    liste_cases[25] = &Gare2;
    liste_cases[26] = &Terrain14;
    liste_cases[27] = &Terrain15;
    liste_cases[28] = &Compagnie1;
    liste_cases[29] = &Terrain16;
    liste_cases[30] = &Prison1;
    liste_cases[31] = &Terrain17;
    liste_cases[32] = &Terrain18;
    liste_cases[33] = &Communaute2;
    liste_cases[34] = &Terrain19;
    liste_cases[35] = &Gare3;
    liste_cases[36] = &Chance2;
    liste_cases[37] = &Terrain20;
    liste_cases[38] = &Taxe1;
    liste_cases[39] = &Terrain21;

    //Relier les cases entre elles
    for (int i=0; i<39, i++;){
        liste_cases[i]->setSuivante(liste_cases[i+1]);
    }
    liste_cases[39]->setSuivante(liste_cases[0]);
}

Case* Plateau::getCase(int n)
{
    return liste_cases[n];
}
