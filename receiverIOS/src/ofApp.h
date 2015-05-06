#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

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
    
        ofxOscReceiver recvr;
    
    
        float gyroX;
        float gyroY;
        float gyroZ;
    
        float accX;
        float accY;
        float accZ;
    
        float sliderA;
        float sliderB;
        float sliderC;
        float sliderD;
        float sliderE;
    
        int switch1;
        int switch2;
        int switch3;
        int switch4;
        int switch5;
    
    
    
};
