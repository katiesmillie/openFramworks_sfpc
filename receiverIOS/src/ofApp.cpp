#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

    recvr.setup(8000);
    ofSetFrameRate(20);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    while (recvr.hasWaitingMessages()){
        ofxOscMessage m;
        recvr.getNextMessage(&m);
        
        if(m.getAddress() == "/aOSC/gyro/x"){
            gyroX = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/gyro/y"){
            gyroY = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/gyro/x"){
            gyroZ = m.getArgAsFloat(0);
        }
        
        // gyro is float between -90, 90
        
        if(m.getAddress() == "/aOSC/acc/x"){
            accX = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/acc/y"){
            accY = m.getArgAsFloat(0);
        }

        if(m.getAddress() == "/aOSC/acc/z"){
            accZ = m.getArgAsFloat(0);
        }

                // acc is float between -3 and 8 --> 7 is a hard target to hit
        
        if(m.getAddress() == "/aOSC/slider/a"){
            sliderA = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/slider/b"){
            sliderB = m.getArgAsFloat(0);
        }
    
        if(m.getAddress() == "/aOSC/slider/c"){
            sliderC = m.getArgAsFloat(0);
        }
    
        if(m.getAddress() == "/aOSC/slider/d"){
            sliderD = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/slider/e"){
            sliderE = m.getArgAsFloat(0);
        }
        
        if(m.getAddress() == "/aOSC/switch/1"){
            switch1 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/aOSC/switch/2"){
            switch2 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/aOSC/switch/3"){
            switch3 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/aOSC/switch/4"){
            switch4 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/aOSC/switch/5"){
            switch5 = m.getArgAsInt32(0);
        }

    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofCircle(100,100, 100*sliderA);
    ofCircle(200,100, 100*sliderB);
    ofCircle(300,100, 100*sliderC);
    ofCircle(400,100, 100*sliderD);
    ofCircle(500,100, 100*sliderE);
    
    
    if (switch1 == 0){
        ofSetColor(ofColor::blue);
    }else{
        ofSetColor(ofColor::crimson);
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
