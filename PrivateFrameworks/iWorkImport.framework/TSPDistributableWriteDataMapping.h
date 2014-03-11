/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, TSPIdentifierDictionary, TSPObjectContext;

@interface TSPDistributableWriteDataMapping : NSObject {
    TSPObjectContext *_context;
    TSPIdentifierDictionary *_identifierToPathMap;
    NSMutableSet *_paths;
}

- (void)dealloc;
- (id)exportedPathForIdentifier:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)setExportedPath:(id)arg1 forData:(id)arg2;

@end