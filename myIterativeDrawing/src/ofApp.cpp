#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //    ofSetFrameRate(4);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0,0,0);
    
    
    
    int green = 255;
    int blue = 255;
    int red = 0;
    
    ofNoFill();
    ofSetColor(red,green,blue);
    
    float x = 50;
    float y = 50;
    float width = 50;
    float height = 100;
    
    //    float width = ofRandom(10,100);
    
    
    for (int i = 0; i < 12; i ++) {
        
        y += 40;
        green -= 2;
        
        ofEllipse(x,y,width ,height);
        
        
        for (int j = 0; j < 15; j ++) {
            
            x += 5;
            blue -= 2;
            red += 1;
            ofSetColor(red,green,blue);
            
            ofEllipse(x,y,width,height);
            
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
