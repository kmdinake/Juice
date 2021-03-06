#ifndef BLENDER_H
#define BLENDER_H

#include <vector>
#include <string>

#include "juices.h"
#include "juice-php.h"
#include "juice-nodejs.h"
#include "juice-angularjs.h"

using namespace std;

class Blender {
	public:
		Blender();
		void setJuiceTo(String); // based on the string will instatiate the correct subtype of juice
		void mixItAllUp();
		static bool validAction(String);
		static bool validCommand(String);
	private:
		Juice juice;
		Vector< String > actionList;
		Vector< String > commandlist;
		void init(); // adds all the valid actions & commands
};

#endif
