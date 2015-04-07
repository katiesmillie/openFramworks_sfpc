#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,0);
    ofSetFrameRate(2);
    
    
    panel.setup("star", "settings.xml", 510, 10);
    
    panel.add(nPoints.set("nPoints", 6, 4, 10)); // Can't seem to change the nPoints in Gui without crashing
    
//    panel.add(resample.set("resample", 3, 2, 7)); // commenting this out for now to simplify

}


//--------------------------------------------------------------
void ofApp::drawStar(){
    
    ofPoint startingPoint;
    startingPoint.set(250,250);
    
    float angleDivision = TWO_PI / (float)nPoints;
    float outerRadius = 200;
    float innerRadius = outerRadius / 3;
    
    for (int i = 0; i < nPoints; i++){  // I used to do this in two separate loops, create two growable arrays and then push them into one larger growable array. I think this refactoring makes more sense but due to error below I can't test
        
        float outerAngle = angleDivision * i;
        float innerAngle = angleDivision * i + .6;

        ofPoint outerPt = startingPoint + outerRadius * ofPoint(cos(outerAngle), sin(outerAngle));
        allPts.push_back(outerPt);
        
        ofPoint innerPt = startingPoint + innerRadius * ofPoint(cos(innerAngle), sin(innerAngle));
        allPts.push_back(innerPt); // I keep getting an error on this line when building

    }
}


//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(100,200,200);
    
    drawStar();
    
    ofPolyline line;
    
    for (int i = 0; i < nPoints * 2; i++) {
        line.addVertex(allPts[i]);
    }
    
    
    ofBeginShape();
    
    for (int i = 0; i < nPoints * 2; i++) {
        ofVertex(allPts[i]);
    }
    
    ofEndShape();
    
    line = line.getResampledBySpacing(3); // can't figure out how to get resample to work with begin and end shape. I wanted to use begin and end shape so that I could fill the shape with a solid color.
    
    line = line.getSmoothed(20);
    
    
    panel.draw();
    
    
//        ofPolyline line;
//    
//        line.addVertex(allPts[0]);
//        line.addVertex(allPts[1]);
//        line.addVertex(allPts[2]);
//        line.addVertex(allPts[3]);
//        line.addVertex(allPts[4]);
//        line.addVertex(allPts[5]);
//        line.addVertex(allPts[6]);
//        line.addVertex(allPts[7]);
//        line.addVertex(allPts[8]);
//        line.addVertex(allPts[9]);
//        line.addVertex(allPts[0]);
//    
//        line.close();
//        line = line.getResampledBySpacing(3);
//        line = line.getSmoothed(20);
//    
//        line.draw();
    
    
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
