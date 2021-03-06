/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {
    <MSPReplicaRecord> * _recordWithInformationToInsert;
}

@property (nonatomic, readonly) <MSPReplicaRecord> *recordWithInformationToInsert;

- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)recordWithInformationToInsert;

@end
