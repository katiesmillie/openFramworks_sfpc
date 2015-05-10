
//
//  profile.cpp
//  profilePics
//
//  Created by Katie Smillie on 5/10/15.
//
//

#include "profile.h"



//----------------------------
void profile::setup(string file, string name, float hours){
        
    image.loadImage(file);
    hours = hours;
    name = name;
    
}

//----------------------------
void profile::draw(float x, float y){

//    image.draw(x,y);

    
    for (int i = 0; i < image.width; i+=5){
        for (int j = 0; j < image.height; j+=5){
            
            ofColor myColor = image.getColor(i, j);
            
//          float brightness = myColor.getBrightness();
//          float radius = ofMap( brightness, 0, 255, 1, 3 );
            
            ofSetColor(myColor);
            
        
            ofRect(i+x,j+y,2,4);
        }
    }

}

//----------------------------
