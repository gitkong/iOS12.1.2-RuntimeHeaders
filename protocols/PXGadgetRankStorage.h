/* Generated by EzioChiu.
 */

@protocol PXGadgetRankStorage

@required

- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)resetStoredRanks;
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;

@end