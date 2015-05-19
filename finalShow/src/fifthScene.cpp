

#include "fifthScene.h"

//--------------------------------------------------------------
void fifthScene::setup(){
    
    ofSeedRandom(2);
    
    ofTrueTypeFont::setGlobalDpi(72);
    
    font.loadFont("opensans.ttf", 34, true, true);
    font.setLetterSpacing(1.037);
    
    fontItalic.loadFont("openitalic.ttf", 54, true, true);
    font.setLetterSpacing(1.037);
    
}

//--------------------------------------------------------------
void fifthScene::update(){
    
}

//--------------------------------------------------------------
void fifthScene::draw(){
    
    ofSeedRandom(3);

    int numShapes = 125;
    
    for (int r=0; r < numShapes; r++) {
        red = ofRandom(50, 200);
        green = ofRandom(50, 100);
        blue = ofRandom(50, 150);
        randX = ofRandom(0,1000);
        randY = ofRandom(0, 1900);
        float radius = ofNoise(ofGetElapsedTimef())*ofRandom(20,100);
        
        ofSetColor(red, green, blue, 70);
        ofCircle(randX, randY, radius);
        
    }
    
    
    ofSetColor(255);
    
    string string = "What if you could change";
    
    ofRectangle rect = font.getStringBoundingBox(string, x,y);
    x = 100;
    y = 200;
    font.drawString(string, x,y);
    
    string = "the cost model";
    
    rect = fontItalic.getStringBoundingBox(string, x,y);
    x = 100;
    y = 300;
    fontItalic.drawString(string, x,y);
    
    
    string = "of your online consumption?";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = 100;
    y = 400;
    font.drawString(string, x,y);
    
    
    string = "What if you could be more";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = 480;
    y = 800;
    font.drawString(string, x,y);
    
    string = "mindful";
    
    rect = fontItalic.getStringBoundingBox(string, x,y);
    x = 480;
    y = 900;
    fontItalic.drawString(string, x,y);
    
    string = "of the time you spent online?";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = 480;
    y = 1000;
    font.drawString(string, x,y);
    
    string = "What if you could turn your time into money and";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = 100;
    y = 1400;
    font.drawString(string, x,y);
    
    
    string = "give it as a gift?";
    
    rect = fontItalic.getStringBoundingBox(string, x,y);
    x = 100;
    y = 1500;
    fontItalic.drawString(string, x,y);
    
    
        
}