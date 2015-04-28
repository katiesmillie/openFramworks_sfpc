#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(10);
    red = 100;
    blue = 100;
    green = 100;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    red = ofRandom(150,200);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);
    
    float x = ofGetWindowWidth()/2;
    float y = ofGetWindowHeight()/2;
    
    pos.set(x,y);
    
    int numRings = 20;
    float angle = TWO_PI/numRings;
    
    float sinValue = sin(ofGetElapsedTimef()/TWO_PI);
    float cosValue = cos(ofGetElapsedTimef()/TWO_PI);

    
    for (int i = 0; i < numRings; i++){
        
        ofSetColor(red, green, blue, 50);
        
        float radius = ofNoise(ofGetElapsedTimef()+i*2)*500;
        float centerx = pos.x + radius*cos(angle*i);
        float centery = pos.y + radius*sin(angle*i);
        
        ofCircle(centerx, centery, 1+sinValue*100);
    
    }
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
