#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(100);
    ofEnableAlphaBlending();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    line = line.getResampledBySpacing(6);
    line = line.getSmoothed(100);
    
    
    for (int i = 0; i < myPts.size(); i++){
        myPts[i].x = myPts[i].x + ofRandom(-5,5);
        myPts[i].y = myPts[i].y + ofRandom(-5,5);
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (int i = 0; i < myPts.size(); i++){
        line.addVertex(myPts[i].x, myPts[i].y);
    }
    
    line.draw();
    line.close();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
    float red = ofRandom(50, 200);
    float green = ofRandom(50, 100);
    float blue = ofRandom(50, 150);
    
    int numShapes = 2;
    
    for (int r=0; r<numShapes; r++) {
        ofSetColor(red, green, blue, 50);
        
        float radius = ofRandom(3, 10);
        float distance = ofRandom(50,100);
        
        float angle = ofRandom(ofDegToRad(360.0));
        
        float xOffset = cos(angle) * distance;
        float yOffset = sin(angle) * distance;
        
        ofCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);
        
    }

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  
    ofPoint tempPt;
    tempPt.set(x,y);
    myPts.push_back(tempPt);
 

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    ofPoint tempPt;
    tempPt.set(x,y);
    myPts.push_back(tempPt);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
   
    int numLines = ofRandom(50, 150);
    int minRadius = ofRandom(50, 100);
    int maxRadius = ofRandom(100, 200);
    for (int i=0; i<numLines; i++) {
        float angle = ofRandom(ofDegToRad(360.0));
        float distance = ofRandom(minRadius, maxRadius);
        float xOffset = cos(angle) * distance;
        float yOffset = sin(angle) * distance;
        float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);  // Make shorter lines more opaque
        
        ofSetColor(255, alpha);
        ofLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
    }
    myPts.clear();

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
