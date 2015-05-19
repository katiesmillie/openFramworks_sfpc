

#include "firstScene.h"


//--------------------------------------------------------------
void firstScene::setup(){
    
    aol.loadImage("aol.jpg");
    internet.loadImage("InternetEverywhere.png");
    
 
    
    ofTrueTypeFont::setGlobalDpi(72);
    font.loadFont("opensans.ttf", 36, true, true);
    fontBold.loadFont("openbold.ttf", 44, true, true);
    
    height = aol.getHeight()/1.5;
    width = aol.getWidth()/1.5;

    aol.resize(width, height);
}

//--------------------------------------------------------------
void firstScene::update(){
	
}

//--------------------------------------------------------------
void firstScene::draw(){
    
    
    x = ofGetWindowWidth()/2 - width/2;
    y = ofGetWindowHeight()/2 - height/2 - 380;
        
    aol.draw(x,y);
    
    x = ofGetWindowWidth()/2 ;
    y = ofGetWindowHeight()/2 + height/2 - 350;

    internet.draw(x -internet.width/2, 1920-internet.height);

    for (int i =0; i < 8; i++){
        ofSetColor(80+i*20, 60, 60);
        ofFill;
        ofCircle(x,y, 5);
        y+=20;
    }
    
    
    
    
    ofSetColor(255);
    
    string string = "Once upon a time, there was a" ;
    
    ofRectangle rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 150;
    font.drawString(string, x,y);
    
    string = "$ / minute cost";
    
    rect = fontBold.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 225;
    fontBold.drawString(string, x,y);
    
    string = "for consuming information online";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 300;
    font.drawString(string, x,y);

    
    string = "But now we have an all-you-can-eat plan,";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1000;
    font.drawString(string, x,y);
    
    string = "and we pay with our attention";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1075;
    font.drawString(string, x,y);

    
    
}

    
