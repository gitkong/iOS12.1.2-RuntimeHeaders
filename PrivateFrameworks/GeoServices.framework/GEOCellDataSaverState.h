/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCellDataSaverState : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    GEOMapRegion * _region;
    NSString * _regionId;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, readonly) bool hasRegionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) GEOMapRegion *region;
@property (nonatomic, retain) NSString *regionId;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRegion;
- (bool)hasRegionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)region;
- (id)regionId;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRegion:(id)arg1;
- (void)setRegionId:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end