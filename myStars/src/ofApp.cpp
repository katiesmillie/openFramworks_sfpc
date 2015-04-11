#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,0);

    startingPoint.set(500,500);
    
    panel.setup("star", "settings.xml", 510, 10);
    panel.add(nPoints.set("nPoints", 6, 4, 50));
    panel.add(radius.set("radius", 200, 80, 400));
    (nucleus.set("nucleus", 3, 3, 3));
    panel.add(resample.set("resample", 4, 2, 10));
    panel.add(smoothing.set("smoothing", 20, 0, 50));
    panel.add(twist.set("twist", 0, 0, 9));
    panel.add(color.set("color",ofColor(100,200,200),ofColor(0,0),ofColor(255,255)));
    
}

//--------------------------------------------------------------
void ofApp::drawStar(){
    
    float angleDivision = TWO_PI / (float)nPoints;
    float outerRadius = radius;
    float innerRadius = outerRadius / nucleus;
    
    allPts.clear();
    
    for (int i = 0; i < nPoints; i++){
        
        float outerAngle = angleDivision * i;
        float innerAngle = angleDivision * i + angleDivision * 0.5 + twist;
        
        ofPoint outerPt = startingPoint + outerRadius * ofPoint(cos(outerAngle), sin(outerAngle));
        allPts.push_back(outerPt);
        
        ofPoint innerPt = startingPoint + innerRadius * ofPoint(cos(innerAngle), sin(innerAngle));
        allPts.push_back(innerPt);

    }

    ofPolyline line;
    
    for (int i = 0; i < nPoints * 2; i++) {
        line.addVertex(allPts[i]);
    }
    
    line.close();
    
    line = line.getResampledBySpacing(resample);
    line = line.getSmoothed(smoothing);
    
    
    ofBeginShape();
    
    for (int i = 0; i < line.size(); i++) {
        ofVertex(line[i]);
    }
    
    ofEndShape();
}


//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(color);
    
    drawStar();

    panel.draw();
    
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
    
    startingPoint.set(x,y);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    startingPoint.set(x,y);
    
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
