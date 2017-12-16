#include <vector>
#include <string>

#include "juices.h"
#include "juice-php.h"
#include "juice-nodejs.h"
#include "juice-angularjs.h"

using namespace std;

Blender::Blender() {
    this->init();
}

void Blender::init() {

}

void Blender::setJuiceTo(String juice_name) {
    if (juice_name == "") {
        cout << "Cannot set Juicer to without knowing the juice brand" << endl;
        return;
    }
    int size = this->juiceTray.size();
    for (int i = 0; i < size; i++) {
        if (this->juiceTray[i].name == juice_name){
            this->juicer = this->juiceTray[i];
            break;
        }
    }
}

void Blender::mixItAllUp() {

}

static bool Blender::validAction(String action) {
    if (this->actionList.size() == 0) {
        this->init();
        if (this->actionList.size() == 0) {
            cout << "Something went wrong trying to validate the action." << endl;
            return false;
        } else {
            for (int i = 0; i < this->actionList.size(); i++) {
                if (this->actionList[i] == action) {
                    return true;
                }
            }
            return false;
        }
    } else {
        for (int i = 0; i < this->actionList.size(); i++) {
            if (this->actionList[i] == action) {
                return true;
            }
        }
        return false;
    }
}

static bool Blender::validCommand(String) {
    if (this->commandlist.size() == 0) {
        this->init();
        if (this->commandlist.size() == 0) {
            cout << "Something went wrong trying to validate the command." << endl;
            return false;
        } else {
            for (int i = 0; i < this->commandlist.size(); i++) {
                if (this->commandlist[i] == action) {
                    return true;
                }
            }
            return false;
        }
    } else {
        for (int i = 0; i < this->commandlist.size(); i++) {
            if (this->commandlist[i] == action) {
                return true;
            }
        }
        return false;
    }
}
