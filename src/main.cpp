#include "juice.cpp"
#include "juice-php.cpp"
#include "juice-nodejs.cpp"
#include "juice-angularjs.cpp"
#include "blender.cpp"

using namespace std;

/***** Function declarations | Prototypes *****/
void usage();
void actionUsage();
void commandUsage();

int main(int argc, char ** argv) {

	/***** Writing Grocery List *****/
	cout << "Creating a grocery list..." << endl;
	if (argc != 2) {
		usage();
		return 0;
	}

	if (!Blender::validAction(argv[0])) { // validCommand -> static method from Blender class
		cout << "We cant possibly use " << argv[0] << " for writing our grocery list." << endl;
		actionUsage();
		return 0;
	}

	if (!Blender::validCommand(argv[1])) { 
		cout <<  "Unfortunately the store doesn't have any " << argv[1] << "." << endl;
		commandUsage();
		return 0;
	}

	/***** Buying Ingredients *****/
	cout << "Buying the ingredients that we need..." << endl;
	Blender * juicer;
	/* 
		TODO: create juice mixer
	*/
	return 0;
}

void usage() {

}

void actionUsage() {

}

void commandUsage() {

}

