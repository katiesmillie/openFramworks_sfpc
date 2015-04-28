#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(50);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255,100,100);
    ofNoFill();
    ofSetCircleResolution(100);
    ofSetLineWidth(2);
    
    pos.set(100,100);
    
    int numRings = 20;
    float angle = TWO_PI/numRings;
    
    float sinValue = sin(ofGetElapsedTimef()/2);
    float cosValue = cos(ofGetElapsedTimef()/2);
    float radius = ofNoise(ofGetElapsedTimef())*50;
    
    
    for (int i = 0; i < numRings; i++){
        
        float centerx = pos.x + radius*cos(angle*i);
        float centery = pos.y + radius*sin(angle*i);
        float spacing = 200;
        
        for (int i = 0; i < 6; i++) {
            
            float tempx = centerx;
    
            for (int i = 0; i < 6; i++){
                ofCircle(tempx, centery, (1+sinValue+i)*50);
                ofCircle(tempx+spacing, centery, (1+cosValue+i)*50);
                tempx += spacing*2;
            }
            centery += spacing;
        }
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
