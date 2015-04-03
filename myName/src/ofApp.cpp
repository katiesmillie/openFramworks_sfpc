#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground (0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //
    //    ofLine( 100, 100, 600, 100);
    
    //    ofLine( 100, 150, 200, 100);
    //    ofLine( 100, 150, 200, 200);
    //
    
    float x = 100;
    float y = 100;
    float width = 150;
    float height = 200;
    
    //K
    ofLine( x, y, x, y+ height);
    ofLine( x ,y+height/2, x+width, y );
    ofLine( x ,y+height/2, x + width, y + height);
    
    x = x + width + 10;
    
    //A
    ofLine( x, y+height,x + width/2, y);
    ofLine( x+width, y+height,x + width/2, y);
    ofLine( x + .25*width, y + .5*height, x+.75*width, y +.5*height );
    
    x = x + width + 10;
    
    //T
    ofLine( x, y, x+width, y);
    ofLine( x +.5*width, y, x +.5*width, y + height);
    
    x = x + width + 10;
    
    //I
    ofLine( x, y, x+width, y);
    ofLine( x +.5*width, y, x +.5*width, y + height);
    ofLine( x, y+ height, x+width, y+ height);
    
    
    x = x + width + 10;
    
    //E
    ofLine( x, y, x, y+ height);
    ofLine( x, y, x+width, y);
    ofLine( x, y+ height, x+width, y+ height);
    ofLine( x, y + .5*height, x+ .75*width, y +.5*height );
    
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
