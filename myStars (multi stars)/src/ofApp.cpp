#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,0);

    startingPoint.set(500,500);
    
    panel.setup("star", "settings.xml", 510, 10);
    panel.add(nPoints.set("nPoints", 6, 4, 50));
    panel.add(radius.set("radius", 200, 80, 400));
    (nucleus.set("nucleus", 3, 3, 3));
    panel.add(resample.set("resample", 4, 2, 10));
    panel.add(smoothing.set("smoothing", 20, 0, 50));
    panel.add(twist.set("twist", 0, 0, 9));
    panel.add(color.set("color",ofColor(100,200,200),ofColor(0,0),ofColor(255,255)));
    
}


//--------------------------------------------------------------
void ofApp::update(){
    
    liveStar.nPoints = nPoints;
    liveStar.resample = resample;
    liveStar.radius = radius;
    liveStar.nucleus = nucleus;
    liveStar.smoothing = smoothing;
    liveStar.twist = twist;
    liveStar.startingPoint = startingPoint;
    liveStar.color = color;
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    for (int i=0; i < stars.size(); i++) {
        
        stars[i].draw();
    }
    
    liveStar.draw();

    panel.draw();
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
 
    
    if (key == ' '){
        star myStar;
        
        myStar.nPoints = nPoints;
        myStar.resample = resample;
        myStar.radius = radius;
        myStar.nucleus = nucleus;
        myStar.smoothing = smoothing;
        myStar.twist = twist;
        myStar.startingPoint = startingPoint;
        myStar.color = color;
        
        stars.push_back(myStar);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    startingPoint.set(x,y);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    startingPoint.set(x,y);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    


}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
