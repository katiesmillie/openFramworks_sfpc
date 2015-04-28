

#include "ofMain.h"


class star {
    

    public:
    
    void draw();
    
    
    int nPoints;
    int resample;
    int radius;
    int nucleus;
    int smoothing;
    float twist;
    ofColor color;
    ofPoint startingPoint;
    
    vector < ofPoint > allPts;

    
    
};