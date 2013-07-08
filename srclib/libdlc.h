#include <dlfcn.h>

#ifndef LIBRARY_DLC_DLFCN
#define LIBRARY_DLC_DLFCN

//typedef void (*func)(void)

class DLCLibrary
{
protected:
	void *m_library; //Va recevoir la librairie
	void *initializer; //Va faire le tampon pour les fonctions provenants de la librairie
	std::string m_chemin; //Le chemin de la librairie
	int m_par1; //L'argument de chargement, par défaut RTLD_LAZY
	int m_quit; //Recupere la valeur de liberation de mémoire renvoyée par dlclose.
public:
	typedef void (*funcv)(void);
	typedef void (*funci)(int);
	typedef void (*funcc)(char);
	typedef void (*funcl)(long);
	typedef void (*funcd)(double);
	typedef void (*funcf)(float);
	DLCLibrary(std::string chemin); //Constructeur avec RTLD_LAZY
	DLCLibrary(std::string chemin, int par1); //Constructeur avec choix de l'argument de chargement
	void freeMemory(); //Libération de la mémoire
	template <class Func>
	Func getFunction(std::string nomFunc) //Récupérer une fonction de n'importe quel type
	{
		void* initializer = dlsym(m_library, nomFunc.c_str());
        Func init_func = (Func)initializer;
        return init_func;
	}
	funcv getFunctionv(std::string nomFunc); //Récupérer une fonction de type void
	funci getFunctioni(std::string nomFunc); //Récupérer une fonction de type int
	funcc getFunctionc(std::string nomFunc); //Récupérer une fonction de type char
	funcl getFunctionl(std::string nomFunc); //Récupérer une fonction de type long
	funcd getFunctiond(std::string nomFunc); //Récupérer une fonction de type double
	funcf getFunctionf(std::string nomFunc); //Récupérer une fonction de type float
	bool isLoaded(); //Verifier que la librairie est chargée
};

#endif
typedef void (*funcv)(void);
typedef void (*funci)(int);
typedef void (*funcc)(char);
typedef void (*funcl)(long);
typedef void (*funcd)(double);
typedef void (*funcf)(float);
typedef void (*function_type)();
//template <class Func>