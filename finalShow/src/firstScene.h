



#ifndef _CIRCLE_SCENE
#define _CIRCLE_SCENE


#include "ofMain.h"
#include "baseScene.h"


class firstScene : public baseScene {
	
public: 
	
	void setup();
	void update();
	void draw();
   
    
    ofTrueTypeFont font;
    ofTrueTypeFont fontItalic;
    ofTrueTypeFont fontBold;
    
    ofImage aol;
    ofImage internet;
    
    int x;
    int y;
    
    float height;
    float width;
    
};




#endif


