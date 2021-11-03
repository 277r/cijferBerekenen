#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include <vector>


class cijfer_entry{
public:
	int cijfer;
	int weging;

};

class cijferLijst_entry {
public:
	std::string vakNaam;
	std::vector<cijfer_entry>p;
};


std::vector<cijferLijst_entry> cijferLijst;

int laadCijferlijstVanBestand(std::string bestandsNaam){
	cijferLijst.clear();
	std::ifstream input(bestandsNaam);
	std::ostringstream sstr;
    sstr << input.rdbuf();


	std::string data = sstr.str();

	// handle data and set to


}

int bewaarCijferlijstNaarBestand(){

}

int voegCijferToe(){

}

int verwijderCijfer(){

}


int main(){

}