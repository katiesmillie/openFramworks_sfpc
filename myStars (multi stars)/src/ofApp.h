#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "star.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxPanel panel;
    ofParameter <int> nPoints;
    ofParameter <int> resample;
    ofParameter <int> radius;
    ofParameter <int> nucleus;
    ofParameter <int> smoothing;
    ofParameter <float> twist;
    ofParameter <ofColor> color;

    void drawStar();
    
    vector < ofPoint > allPts;

    ofPoint startingPoint;
    
    vector < star > stars;
    
    star liveStar;
    
    
};