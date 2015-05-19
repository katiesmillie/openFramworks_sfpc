
//

#ifndef __scene__fifthScene__
#define __scene__fifthScene__

#include <stdio.h>

#include "ofMain.h"
#include "baseScene.h"


class fifthScene : public baseScene {
    
    
    void setup();
    void update();
    void draw();
    
    
    ofTrueTypeFont font;
    ofTrueTypeFont fontItalic;

    
    int x;
    int y;
    
    
    
    float red;
    float green;
    float blue;
    float randX;
    float randY;
    
    
};


#endif /* defined(__scene__fifthScene__) */
