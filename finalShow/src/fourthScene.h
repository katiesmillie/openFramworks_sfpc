

#ifndef __scene__fourthScene__
#define __scene__fourthScene__

#include <stdio.h>

#include "ofMain.h"
#include "baseScene.h"


class fourthScene : public baseScene {
    
    
    void setup();
    void update();
    void draw();
    
    ofTrueTypeFont font;
    ofTrueTypeFont fontItalic;

    ofImage head;

    
    int x;
    int y;
    
};


#endif /* defined(__scene__fourthScene__) */
