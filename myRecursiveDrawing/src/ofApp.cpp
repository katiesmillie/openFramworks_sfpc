#include "ofApp.h"


void ofApp::drawShape(float x, float y, int level) {
    
    
    if (level > 100) return;
    
    
    int red = ofRandom(0,255);
    int green = ofRandom(0,255);
    int blue = ofRandom(0,255);
    
    ofSetColor(0,green,blue);
    
    
    ofRect(x, y, 100,100);
    
    drawShape(x + 10, y, level+1);
    
    if (ofRandom(0, 1) > .9) {
        
        drawShape(x + 10, y + 10, level+1);
        
        
    }
    
}


//--------------------------------------------------------------
void ofApp::setup(){
    
    
    //    ofSetFrameRate(5);
    //    ofPoint = center
    //    center = ofGetWidth()/2, OfGetHeight()/2
    
    
}
//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    ofNoFill();
    ofSeedRandom(0);
    
    drawShape(0, (ofGetHeight()/2), 0);
    
    
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
