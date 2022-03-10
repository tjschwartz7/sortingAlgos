#ifndef AUTOCOMPLETION_H
#define AUTOCOMPLETION_H

#include "autocompletion.h"
#include <string>
#include "DataStructures.h"

class Autocomplete {
public:
	void ACWordInput();
private:
	Trie words;
};

#endif // !AUTOCOMPLETION_H