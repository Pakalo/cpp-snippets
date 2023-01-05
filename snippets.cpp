
//Randint 

//Initialisation de l'aléatoire
std::srand(std::time(nullptr));
std::rand();
std::rand();
//Cette fonction génére un nombre aléatoire entre deux nombres
size_t aleatEntreBornes(size_t min, size_t max)
{
  return static_cast<size_t>(static_cast<double>(max - min + 1) * std::rand() / (RAND_MAX + 1)) + min;
}



 
// Faire un tableau de pointeur de fonction 	
#include <array>
#include <vector>
typedef std::vector<int>(*function_ptr)(size_t N);//Définition du type du pointeur
// Le tableau
std::array<function_ptr, 5> FuncTab = {initTabAleat, initTabPresqueTri, initTabPresqueTriDeb, initTabPresqueTriDebFin, initTabPresqueTriFin};


// Ouverture de fichier 
#include <fstream>
std::ofstream out("outputUTF8.csv");
	if (!out.is_open())
		std::cerr << "Problème d'ouverture du fichier \"outputUTF8.csv\".\n";