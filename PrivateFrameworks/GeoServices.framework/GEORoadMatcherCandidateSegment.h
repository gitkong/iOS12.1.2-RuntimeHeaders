/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadMatcherCandidateSegment : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinateOnSegment;
    double  _distanceFromSegment;
    double  _distanceInMetersFromJunction;
    GEOMapFeatureJunction * _junction;
    GEOMapFeatureRoad * _road;
    double  _score;
    double  _segmentAngle;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinateOnSegment;
@property (nonatomic, readonly) double distanceFromJunction;
@property (nonatomic, readonly) double distanceFromSegment;
@property (nonatomic, readonly) GEOMapFeatureJunction *junction;
@property (nonatomic, readonly) GEOMapFeatureRoad *road;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double segmentAngle;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinateOnSegment;
- (double)distanceFromJunction;
- (double)distanceFromSegment;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(struct { double x1; double x2; })arg4 endCoordinate:(struct { double x1; double x2; })arg5;
- (id)junction;
- (id)road;
- (double)score;
- (double)segmentAngle;

@end
