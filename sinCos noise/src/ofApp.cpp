#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
 
//    
//    ofSetFrameRate(60);
//    
    float x = ofGetWindowWidth()/2;
    float y = ofGetWindowHeight()/2;
    pos.set(x,y);
    numCircles = 25;

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
    

    ofBackgroundGradient(130,20,OF_GRADIENT_CIRCULAR);
    ofSetCircleResolution(100);
    
    
    
    float angle = TWO_PI/numCircles;
    float sinValue = sin(ofGetElapsedTimef()/TWO_PI);
    float cosValue = cos(ofGetElapsedTimef()/TWO_PI);

    
    for (int i = 0; i < numCircles; i++){
        
        float radius = ofNoise(ofGetElapsedTimef()+i*2)*500;
        float centerx = pos.x + radius*cos(angle*i);
        float centery = pos.y + radius*sin(angle*i);
        
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
