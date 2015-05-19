#pragma once

#include "ofMain.h"
#include "baseScene.h"
#include "firstScene.h"
#include "secondScene.h"
#include "thirdScene.h"
#include "fourthScene.h"
#include "fifthScene.h"
#include "sixthScene.h"





class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
		baseScene  * scenes[6];
		int currentScene;
	
    
    float advanceEverySeconds = 10;
    float lastAdvancdedAtSeconds = 0;
    
};
