


#ifndef _IMAGE_SCENE
#define _IMAGE_SCENE


#include "ofMain.h"
#include "baseScene.h"


class thirdScene : public baseScene {
	
	
	void setup();
	void update();
	void draw();
	
    ofTrueTypeFont font;
    ofTrueTypeFont fontBold;

    
    ofImage mba;

    ofVideoPlayer video;
    
    
    int x;
    int y;
	
};




#endif


