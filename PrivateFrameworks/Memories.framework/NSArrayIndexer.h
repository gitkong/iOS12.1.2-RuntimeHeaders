/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface NSArrayIndexer : NSObject {
    NSIndexSet * _deletedIndexesBeforeInsertions;
    NSArray * _finalArray;
    NSArray * _initialArray;
    NSIndexSet * _insertedIndexesAfterDeletions;
}

@property (nonatomic, retain) NSIndexSet *deletedIndexesBeforeInsertions;
@property (nonatomic, retain) NSArray *finalArray;
@property (nonatomic, retain) NSArray *initialArray;
@property (nonatomic, retain) NSIndexSet *insertedIndexesAfterDeletions;

+ (id)indexerWithInitialArray:(id)arg1 finalArray:(id)arg2;

- (void).cxx_destruct;
- (void)analyze;
- (id)deletedIndexesBeforeInsertions;
- (id)finalArray;
- (id)initWithInitialArray:(id)arg1 finalArray:(id)arg2;
- (id)initialArray;
- (id)insertedIndexesAfterDeletions;
- (void)setDeletedIndexesBeforeInsertions:(id)arg1;
- (void)setFinalArray:(id)arg1;
- (void)setInitialArray:(id)arg1;
- (void)setInsertedIndexesAfterDeletions:(id)arg1;

@end
