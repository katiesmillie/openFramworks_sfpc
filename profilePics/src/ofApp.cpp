#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    profile temp;
    
    
//    ofDirectory dir;
//    dir.listDir("profile");
//    
//    for (int i = 0; i < dir.size(); i++){
//      
//        temp.setup(dir.getPath(i), "name", 6);
//        profiles.push_back(temp);
////        cout << dir.getPath(i) << endl;
////        cout << dir.getName(i) << endl;
//    }
//    

    
    temp.setup("katie.jpg", "Katie", 6);
    profiles.push_back(temp);
    
    temp.setup("cm.jpg", "Christopher", 10);
    profiles.push_back(temp);
    
    temp.setup("bo.jpg", "Bo", 10);
    profiles.push_back(temp);
   
    temp.setup("shay.jpg", "Shay", 10);
    profiles.push_back(temp);
    
    temp.setup("casey.jpg", "Casey", 5);
    profiles.push_back(temp);

    temp.setup("alice.jpg", "Alice", 5);
    profiles.push_back(temp);
    
    temp.setup("nathan.jpg", "Nathan", 4);
    profiles.push_back(temp);
    
    temp.setup("julia.jpg", "Julia", 10);
    profiles.push_back(temp);
    
    temp.setup("Austen.jpg", "Austen", 10);
    profiles.push_back(temp);
    
    temp.setup("kelly.jpg", "Kelly", 9);
    profiles.push_back(temp);
    
    temp.setup("tina.jpg", "Tina", 1);
    profiles.push_back(temp);
    
    temp.setup("andrew.jpg", "Andrew", 10);
    profiles.push_back(temp);
    
    temp.setup("ana.jpg", "Anastasis", 3);
    profiles.push_back(temp);
    
    temp.setup("eve.jpg", "Eve", 3);
    profiles.push_back(temp);
    
    temp.setup("brian.jpg", "Brian", 3);
    profiles.push_back(temp);
    
    temp.setup("mike.jpg", "Mike", 3);
    profiles.push_back(temp);
    
    
    compute();
    
    ofTrueTypeFont::setGlobalDpi(72);
    
    font.loadFont("CourierNew.ttf", 24, true, true);
    font.setLineHeight(30.0f);
    font.setLetterSpacing(1.037);

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
 
//    string people;
//    people = ofToString(ppl);
//
//    string hours;
//    hours = ofToString(hrs);
//    
//    string gift;
//    gift = "$" + ofToString(gft);
//    
//    int x = ofGetWindowHeight() / 3;
//    int y = 100;
//    
//    ofSetColor(255);
//   
//    font.drawString("humans", x,y);
//    font.drawString(people, x+600,y);
//    
//    font.drawString("estimated hours", x,y+40);
//    font.drawString(hours, x+600, y+40);
//    
//    font.drawString("projected gift", x,y+80);
//    font.drawString(gift, x+600, y+80);
    
    int width = 200;
    int height = 200;

    int x = 0;
    int y = 0;
    
//    float root = ceil(sqrt(profiles.size()));
    
    
//    ofPoint temp;
//    
//    for (int i=0; i < profiles.size(); i++) {
//        profiles[i].image.resize(width,height);
//    }
//    
//    for (int k = 0; k < root; k++ ) {
//        x = 0;
//        y+= height;
//        temp.set(x, y);
//        points.push_back(temp);
//
//        
//        for (int l = 0; l < root; l++ ) {
//           
//            x+= width;
//            temp.set(x, y);
//            points.push_back(temp);
//        }
//        
//    }

    

        
        for (int i=0; i < profiles.size(); i++){
            profiles[i].draw(100+(200*i), 200);
        }
        

    
    

    
    
        
}

//--------------------------------------------------------------
void ofApp::compute(){
    
    ppl = profiles.size();
    
    for (int i=0; i < ppl; i++){
        hrs += profiles[i].hours;
    }
    
    gft = hrs*10;
    
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
