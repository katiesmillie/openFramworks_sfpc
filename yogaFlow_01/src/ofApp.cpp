#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myPlayer.loadMovie("movies/yoga01.mov");
    myPlayer.play();

}

//--------------------------------------------------------------
void ofApp::update(){

    myPlayer.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myPlayer.draw(20,20);

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
