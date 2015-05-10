//
//  profile.h
//  profilePics
//
//  Created by Katie Smillie on 5/10/15.
//
//

#ifndef __profilePics__profile__
#define __profilePics__profile__

#include <stdio.h>
#include "ofMain.h"


#endif /* defined(__profilePics__profile__) */

class profile {
    
    
public:
    
    void setup(string file, string name, float hours);
    void draw(float x, float y);
    
    
    ofImage image;
    
    float hours;
    string name;
    

};