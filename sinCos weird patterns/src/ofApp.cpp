#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(2);
    
    float x = ofGetWindowWidth()/2;
    float y = ofGetWindowHeight()/2;
    pos.set(x,y);
    numCircles = 15;

    for (int i = 0; i < numCircles; i++){
        circle myCircle;
        circles.push_back(myCircle);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    

    

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);
    
    
    
    float angle = TWO_PI/numCircles;
    float sinValue = sin(ofGetElapsedTimef()/TWO_PI);
    float cosValue = cos(ofGetElapsedTimef()/TWO_PI);
    float fun = ofRandom(5,15);
    
    for (int i = 0; i < numCircles; i++){
        
        float radius = ofNoise(ofGetElapsedTimef()+i*2)*500;
        float centerx = pos.x + radius*cos(angle*i*fun);
        float centery = pos.y + radius*sin(angle*i*fun);
        
        circles[i].draw(centerx, centery, 1+sinValue*100, i/numCircles);
        
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
