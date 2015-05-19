#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
	
    scenes[0] = new firstScene();
	scenes[1] = new secondScene();
	scenes[2] = new thirdScene();
    scenes[3] = new fourthScene();
    scenes[4] = new fifthScene();
    scenes[5] = new sixthScene();
	
	currentScene = 0;
	
	for (int i = 0; i < 6; i++){
		scenes[i]->setup();
	}
    
}

//--------------------------------------------------------------
void ofApp::update(){
	
	scenes[currentScene]->update();
    
    if(ofGetElapsedTimef() - lastAdvancdedAtSeconds > advanceEverySeconds) {
    
        currentScene++;
        lastAdvancdedAtSeconds = ofGetElapsedTimef();
        currentScene %= 6;
        
    }
    
}


//--------------------------------------------------------------
void ofApp::draw(){
	
    ofBackground(0);
	scenes[currentScene]->draw();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    lastAdvancdedAtSeconds = ofGetElapsedTimef();
    
    switch (key) {
        
            
        case OF_KEY_RIGHT:
        case ' ':
            currentScene++;
            currentScene %= 6;
        break;
            
        case OF_KEY_LEFT:
            currentScene--;
            if(currentScene < 0) currentScene = 5;
        break;
    
    }
    
}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    switch (key) {
        case OF_KEY_RETURN:
            scenes[currentScene]->email();
        break;
    }

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
