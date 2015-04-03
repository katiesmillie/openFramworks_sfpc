#include "ofApp.h"



void ofApp::drawShape(float x, float y, float r, int angle, int level) {
    
    
    if (level > 200) return;
    
    
    int green = ofRandom(0,255);
    ofSetColor(100,200,green);
    
    
    float centerx = x + r*cos(ofDegToRad(angle));
    float centery = y + r*sin(ofDegToRad(angle));
    
    
    ofCircle(centerx, centery, r);
    
    if (r > 0) {
        
        drawShape(x, y, r-3, angle + 10, level+1);
        
    }
    
    if (ofRandom(0,1) > .975) {
        
        drawShape(x + ofRandom(100, 400), y - ofRandom(100, 400), 1.2*r, angle, level+1);
        drawShape(x - ofRandom(100, 400), y + ofRandom(100, 400), 1.2*r, angle, level+1);
        
    }
    
    
}


//--------------------------------------------------------------
void ofApp::setup(){
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    ofNoFill();
    ofSeedRandom(0);
    
    ofSetCircleResolution(100);
    
    float x = ofGetWidth()/2;
    float y = ofGetHeight()/2;
    
    
    
    drawShape(x, y, 150, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
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
