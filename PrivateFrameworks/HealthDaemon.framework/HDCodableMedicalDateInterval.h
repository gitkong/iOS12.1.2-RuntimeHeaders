/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying> {
    HDCodableMedicalDate * _endDate;
    HDCodableMedicalDate * _startDate;
}

@property (nonatomic, retain) HDCodableMedicalDate *endDate;
@property (nonatomic, readonly) bool hasEndDate;
@property (nonatomic, readonly) bool hasStartDate;
@property (nonatomic, retain) HDCodableMedicalDate *startDate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endDate;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)writeTo:(id)arg1;

@end