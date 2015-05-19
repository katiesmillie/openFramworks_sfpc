
#include "sixthScene.h"


//--------------------------------------------------------------
void sixthScene::setup(){
    
    kinect.init();
    kinect.open();
    float angle = -10;
    kinect.setCameraTiltAngle(angle);
    
    ofImage temp;
    ofDirectory dir;
    dir.listDir("profile");
    
    for (int i = 0; i < dir.size(); i++){
        temp.loadImage(dir.getPath(i));
        images.push_back(temp);
     }
    
    ofTrueTypeFont::setGlobalDpi(72);
    font.loadFont("opensans.ttf", 34, true, true);
    fontItalic.loadFont("openitalic.ttf", 34, true, true);
    fontItalic.setLetterSpacing(1.037);
    fontBold.loadFont("openbold.ttf", 44, true, true);
    fontSmall.loadFont("opensans.ttf", 24, true, true);

    
    x = ofGetWindowWidth()/2-200;
    y = ofGetWindowHeight()/2+ 100;
    
    monoLineTextInput.setup();
    monoLineTextInput.text =   "";
    monoLineTextInput.bounds.x = x;
    monoLineTextInput.bounds.y = 1120;
    monoLineTextInput.bounds.height = 60;
    monoLineTextInput.bounds.width = 400;
    monoLineTextInput.setFont(fontSmall);
    
}

//--------------------------------------------------------------
void sixthScene::update(){
    kinect.update();
}

//--------------------------------------------------------------
void sixthScene::draw(){
    
    x = ofGetWindowWidth()/2-150;
    y = ofGetWindowHeight()/2;

    kinect.getTextureReference().drawSubsection(x,750, 300,300,220,0);

    x=120;

    int width = 200;
    int height = 200;
    
    for (int i=0; i < 4; i++){
        images[i].resize(width,height);
        images[i].draw(x, 100);
        x+=width+10;
    }
    x=120;
    
    for (int i=4; i < 8; i++){
        images[i].resize(width,height);
        images[i].draw(x, 400);
        x+=width+10;
    }
    x=120;
    
    for (int i=8; i < 12; i++){
        images[i].resize(width,height);
        images[i].draw(x, 1300);
        x+=width+10;
    }

    x=120;
    
    for (int i=12; i < 16; i++){
        images[i].resize(width,height);
        images[i].draw(x, 1600);
        x+=width+10;
    }
    
    string string = "Turn your screen time into philanthropic time.";
    
   ofRectangle rect = font.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 360;
    font.drawString(string, x,y);
    
    string = "Join the movement.";
    
    rect = fontBold.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 700;
    fontBold.drawString(string, x,y);
    
    string = "sign up for an invite to the beta";
    
    rect = fontSmall.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1100;
    fontSmall.drawString(string, x,y);
    
    
    string = "<< hit return to submit your email >>";
    
    rect = fontSmall.getStringBoundingBox(string, x,y);
    x = ofGetWindowWidth()/2 - rect.width/2;
    y = 1220;
    fontSmall.drawString(string, x,y);
    
    ofLine(monoLineTextInput.bounds.x, monoLineTextInput.bounds.y+monoLineTextInput.bounds.height, monoLineTextInput.bounds.x+monoLineTextInput.bounds.width, monoLineTextInput.bounds.y+monoLineTextInput.bounds.height);
    monoLineTextInput.draw();
    
}

    
// --- user submits email ----------------
    
 void sixthScene::email() {
     
    ofLogToFile("emails.txt", true);
    ofLog() << monoLineTextInput.text;
    monoLineTextInput.text =   " ";

}

