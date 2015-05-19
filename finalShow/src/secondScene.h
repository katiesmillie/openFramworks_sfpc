


#ifndef _SQUARE_SCENE
#define _SQUARE_SCENE


#include "ofMain.h"
#include "baseScene.h"


class secondScene : public baseScene {
	
	
	void setup();
	void update();
	void draw();
    
    ofTrueTypeFont font;
    ofTrueTypeFont fontBold;

    ofImage tinder;
    ofImage slack;
    ofImage message;
    ofImage facebook;
    
    int x;
    int y;
    
    int count[3];
    float lastCount;
    float nextCountSeconds;
	
};




#endif


