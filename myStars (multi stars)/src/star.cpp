//
//  star.cpp
//  myStars
//
//  Created by Katie Smillie on 4/15/15.
//
//

#include "star.h"



void star::draw(){
    
 
    
    ofSetColor(color);
    
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

    

