//
//  circle.cpp
//  sinCos
//
//  Created by Katie Smillie on 4/30/15.
//
//

#include "circle.h"

void circle::draw(float x, float y, float radius, float offset){
    
    
    float frequency = 3;

    red = sin(frequency*(ofGetElapsedTimef()-offset) + 0) * 47 + 208;
    
    cout << red << endl;
    green = (sin(frequency*(ofGetElapsedTimef()-offset) + 2) * 47 + 208);
    blue = (sin(frequency*(ofGetElapsedTimef()-offset) + 4) * 47 + 208);

    


    ofSetColor(red, green, blue, 80);
    ofNoFill;
    
    
  
//    
//    Polyline.addpoint(ofPoint(x,y))
 
    
    ofCircle(x, y, radius);

}
