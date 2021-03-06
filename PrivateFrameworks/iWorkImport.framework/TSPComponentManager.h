/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCache, NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, NSString, TSPComponent, TSPObjectContext;

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {
    NSCache *_componentCache;
    NSMapTable *_componentDictionary;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    TSPObjectContext *_context;
    int _ignoreCachedObjectEvictionCount;
    BOOL _isTornDown;
    TSPComponent *_packageMetadataComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
    TSPComponent *_viewStateComponent;
}

@property(readonly) TSPObjectContext * context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) TSPComponent * documentComponent;
@property(readonly) TSPComponent * documentObjectContainerComponent;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isDocumentComponentTreeModified;
@property(readonly) BOOL isSupportComponentTreeModified;
@property(readonly) TSPComponent * packageMetadataComponent;
@property(readonly) Class superclass;
@property(readonly) TSPComponent * supportComponent;
@property(readonly) TSPComponent * supportObjectContainerComponent;
@property(retain) TSPComponent * viewStateComponent;

- (void).cxx_destruct;
- (void)beginIgnoringCachedObjectEviction;
- (void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)componentForRootObjectIdentifier:(long long)arg1;
- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)componentForRootObjectOfLazyReference:(id)arg1;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;
- (void)discardOrphanedComponents;
- (id)documentComponent;
- (id)documentComponentImpl;
- (id)documentObjectContainerComponent;
- (void)endIgnoringCachedObjectEviction;
- (void)enumerateComponents:(id)arg1;
- (void)evictAllCachedObjects;
- (void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (BOOL)isActive;
- (BOOL)isDocumentComponentTreeModified;
- (BOOL)isSupportComponentTreeModified;
- (void)loadFromPackage:(id)arg1 metadata:(id)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (id)packageMetadataComponent;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;
- (id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)setViewStateComponent:(id)arg1;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (id)supportComponent;
- (id)supportComponentImpl;
- (id)supportObjectContainerComponent;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)tearDown;
- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(id)arg2;
- (id)viewStateComponent;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;

@end
