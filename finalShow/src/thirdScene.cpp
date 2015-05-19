

#include "thirdScene.h"


//--------------------------------------------------------------
void thirdScene::setup(){
		
    
    mba.loadImage("Laptop.png");
        
    ofTrueTypeFont::setGlobalDpi(72);
    
    font.loadFont("opensans.ttf", 36, true, true);
    font.setLetterSpacing(1.037);
    
    fontBold.loadFont("openbold.ttf", 64, true, true);
    fontBold.setLetterSpacing(1.037);
    
    video.loadMovie("browsingcrop.mov");
    video.setSpeed(10);
    video.play();
    
}

//--------------------------------------------------------------
void thirdScene::update(){
    
    video.update();
}

//--------------------------------------------------------------
void thirdScene::draw(){

   	
    x = ofGetWindowWidth()/2 - mba.getWidth()/2;
    y = ofGetWindowHeight()/2 - mba.getHeight()/2;
    
    
    mba.draw(x,y-200, mba.width, mba.height);
    video.draw(x+170,y-150);
    
    
    string string = "An avergage American consumes";
    
    ofRectangle rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 200;
    font.drawString(string, x,y);
    
    
    string = "63 GB";
    
    rect = fontBold.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 300;
    fontBold.drawString(string, x,y);

    string = "of digital media each day.";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 400;
    font.drawString(string, x,y);

    
    
    
    string = "After just 4 days that's more than a ";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1300;
    font.drawString(string, x,y);
    
    string = "256 GB Macbook Air";
    
    rect = fontBold.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1400;
    fontBold.drawString(string, x,y);

    string = "can hold in its memory.";
    
    rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1500;
    font.drawString(string, x,y);


    
	
}
	
