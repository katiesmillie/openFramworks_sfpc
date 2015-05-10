#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    profile temp;
    
    
    // would like to automate this is posibble
    
    temp.setup("katie.jpg", "Katie", 6);
    profiles.push_back(temp);
    temp.setup("cm.jpg", "Christopher", 20);
    profiles.push_back(temp);
    temp.setup("bo.jpg", "Bo", 30);
    profiles.push_back(temp);
    temp.setup("shay.jpg", "Shay", 20);
    profiles.push_back(temp);
    
    
    compute();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
 
    string people;
    people = ofToString(ppl);

    string hours;
    hours = ofToString(hrs);
    
    string gift;
    gift = ofToString(gft);
    
    ofDrawBitmapString("People", 100,80);
    ofDrawBitmapString(people, 400,80);
    
    ofDrawBitmapString("Estimated hours per month", 100,120);
    ofDrawBitmapString(hours, 400, 120);
    
    ofDrawBitmapString("Projected monthly gift", 100,160);
    ofDrawBitmapString(gift, 400, 160);

    
    for (int i=0; i < profiles.size(); i++){
        profiles[i].draw(100+(200*i), 200);
    }
    


}

//--------------------------------------------------------------
void ofApp::compute(){
    
    ppl = profiles.size();
        
    
    for (int i=0; i < ppl; i++){
        hrs += profiles[i].hours;
        
        cout << hrs << endl;
        
    }
    
    gft = hrs*10;
    
      cout << gft << endl;

    
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
