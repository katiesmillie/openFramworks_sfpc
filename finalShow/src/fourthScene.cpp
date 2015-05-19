
#include "fourthScene.h"


//--------------------------------------------------------------
void fourthScene::setup(){
    

    head.loadImage("Head.png");
    head.resize(head.width/1.5, head.height/1.5);

    ofSetFrameRate(30);

    ofTrueTypeFont::setGlobalDpi(72);
    
    font.loadFont("opensans.ttf", 36, true, true);
    font.setLetterSpacing(1.037);
   
    fontItalic.loadFont("openitalic.ttf", 64, true, true);
    fontItalic.setLetterSpacing(1.037);

}

//--------------------------------------------------------------
void fourthScene::update(){
    
}

//--------------------------------------------------------------
void fourthScene::draw(){
    
    
    
    
    x = ofGetWindowWidth()/2 - head.getWidth()/2;
    y = ofGetWindowHeight()/2 - head.getHeight()/2-100;
    head.draw(x,y);

    float radius = ofRandom(1,5);
    int randX = ofRandom(375, 675);
    int randY = ofRandom(580, 800);
    
    int numLines = ofRandom(20, 80);
    int minRadius = ofRandom(20, 100);
    int maxRadius = ofRandom(110, 150);
    
    for (int i=0; i<numLines; i++) {
        float angle = ofRandom(ofDegToRad(360.0));
        float distance = ofRandom(minRadius, maxRadius);
        float xOffset = cos(angle) * distance;
        float yOffset = sin(angle) * distance;
        float alpha = ofMap(distance, minRadius, maxRadius, 90, 40);  // Make shorter lines more opaque
    
        ofSetColor(255, alpha);
        ofLine(randX, randY, randX+xOffset, randY+yOffset);
        ofCircle(randX, randY, radius);
            
        }
   
    
    
    
    ofSetColor(255);
    
    
    string string = "But it's not just";
    
    ofRectangle rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 200;
    font.drawString(string, x,y);
    
    string = "food, sex & the internet";
    
    rect = fontItalic.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 300;
    fontItalic.drawString(string, x,y);
    
    string = "that stimulate the reward center of our brain";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 400;
    font.drawString(string, x,y);


    
    string = "We feel a dopamine response when we";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1500;
    font.drawString(string, x,y);
    
    
    string = "give to others";
    
    rect = fontItalic.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1600;
    fontItalic.drawString(string, x,y);
    

    
}
