

#ifndef __scene__sixthScene__
#define __scene__sixthScene__

#include <stdio.h>

#include "ofMain.h"
#include "baseScene.h"
#include "ofxKinect.h"
#include "ofxTextInputField.h"



class sixthScene : public baseScene {
    
    
    void setup();
    void update();
    void draw();
    void email();
    
    
    ofTrueTypeFont font;
    ofTrueTypeFont fontItalic;
    ofTrueTypeFont fontBold;
    ofTrueTypeFont fontSmall;
    
    ofxKinect kinect;
    ofxTextInputField monoLineTextInput;

    
    vector < ofImage > images;
    
    int x;
    int y;
    
    

};

#endif /* defined(__scene__sixthScene__) */
