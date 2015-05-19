#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    ofSetFrameRate(10);
    track.setLoop( true );
    track.play();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
	ofSoundUpdate();	    
    float frequency = .6;
    
    red = sin(frequency*ofGetElapsedTimef() + 4) * 67 + 188;
    green = sin(frequency*ofGetElapsedTimef() + 6) * 67 + 188;
    blue = sin(frequency*ofGetElapsedTimef() + 8) * 67 + 188;
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
//    ofBackground(red, green, blue);
    ofNoFill();
    ofSetCircleResolution(100);
    
    pos.set(100,100);
    
    int numRings = 25;
    float angle = TWO_PI/numRings;
    
    float sinValue = sin(ofGetElapsedTimef()/2);
    float cosValue = cos(ofGetElapsedTimef()/2);
    float radius = ofNoise(ofGetElapsedTimef())*50;
    
    
    for (int i = 0; i < numRings; i++){
        
        ofSetColor(red, green, blue);
        
        float centerx = pos.x + radius*cos(angle*i);
        float centery = pos.y + radius*sin(angle*i);
        float spacing = 200;
        
        for (int i = 0; i < 6; i++) {
            
            float tempx = centerx;
    
            for (int i = 0; i < 6; i++){
                ofCircle(tempx, centery, (1+sinValue)*40);
                ofCircle(tempx+spacing, centery, (1+cosValue)*40);
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
