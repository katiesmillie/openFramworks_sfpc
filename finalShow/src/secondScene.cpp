

#include "secondScene.h"


//--------------------------------------------------------------
void secondScene::setup(){
    
    tinder.loadImage("icon_Tinder.png");
    slack.loadImage("icon_Slack.png");
    message.loadImage("icon_IMessage.png");
    
    ofTrueTypeFont::setGlobalDpi(72);
    
    font.loadFont("opensans.ttf", 36, true, true);

    fontBold.loadFont("openbold.ttf", 34, true, true);
		
    
    count[0] = (int)ofRandom(2,10);
    count[1] =(int)ofRandom(2,10);
    count[2] =(int)ofRandom(2,10);
    nextCountSeconds = 1;
    lastCount =0;
}

//--------------------------------------------------------------
void secondScene::update(){
	
}

//--------------------------------------------------------------
void secondScene::draw(){
    
    float iconSide = message.getWidth()/1.5;
    x = ofGetWindowWidth()/2 - iconSide/2;
    y = 500;

    message.draw(x, y, iconSide, iconSide);
    tinder.draw(x, y+=iconSide*1.5,iconSide, iconSide);
    slack.draw(x, y+=iconSide*1.5, iconSide, iconSide);
    
    
    string myString = "Notifications have us trained us to seek ";
    
    ofRectangle rect = font.getStringBoundingBox(myString, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 225;
    font.drawString(myString, x,y);
    
    myString = "the next hit of dopamine...";
    
    rect = font.getStringBoundingBox(myString, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 300;
    font.drawString(myString, x,y);
    
    myString = "...and we need more and more to keep getting high";

    rect = font.getStringBoundingBox(myString, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1620;
    font.drawString(myString, x,y);
    
// -------animate counters--------
  
    
    
    if(ofGetElapsedTimef() - lastCount > nextCountSeconds) {
     
        int c = (int)ofRandom(3);
        count[c] += 1;
        
        lastCount = ofGetElapsedTimef();
        nextCountSeconds = ofRandom(0.02,0.1);
    }
    
    for(int i=0;i<3;i++) {
        if(count[i] > 200) {
            count[i] = (int)ofRandom(2,10);
        }
    }
    
    ofPushMatrix();
    ofTranslate(615, 0);
    
    int y = 545;
    
    for(int i=0;i<3;i++) {
        
        if(i==1) y = 890;
        if(i==2) y = 1235;
        
        string s = ofToString(count[i]);
        int stringWidth = fontBold.stringWidth(s);
        
        fontBold.drawString(s, 0-stringWidth/2, y);
        
    
    }
    ofPopMatrix();
    
    

//    619
//    535
//    620
//    879
//    618
//    1226
    
	
}

