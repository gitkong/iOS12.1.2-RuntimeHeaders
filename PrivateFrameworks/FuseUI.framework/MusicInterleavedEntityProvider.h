/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicInterleavedEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {
    MusicClientContext * _clientContext;
    bool  _didRequireMerging;
    NSArray * _dynamicPageSectionIndexMappers;
    NSArray * _entityProviders;
    id /* block */  _entityUniqueIdentifierMergeInformationBlock;
    NSArray * _sortedMergeInformation;
}

@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRequireMerging;
@property (nonatomic, copy) NSArray *entityProviders;
@property (nonatomic, copy) id /* block */ entityUniqueIdentifierMergeInformationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didRequireMergingDidChange;
- (id)_dynamicPageSectionIndexMapperForEntityProvider:(id)arg1;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_getSortedMergeInformation:(id*)arg1 requiresMerging:(bool*)arg2 forEntityProviders:(id)arg3;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_reloadIndexMap;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)clientContext;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (bool)didRequireMerging;
- (bool)doEntityProvidersRequireMerging:(id)arg1;
- (id)entityProviders;
- (id /* block */)entityUniqueIdentifierMergeInformationBlock;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (bool)hasExplicitContent;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setEntityProviders:(id)arg1;
- (void)setEntityUniqueIdentifierMergeInformationBlock:(id /* block */)arg1;

@end