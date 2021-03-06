/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBulkCloudLyricsInfoRequest : HSRequest {
    BOOL _useLongIDs;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 sessionID:(unsigned int)arg3 useLongIDs:(BOOL)arg4;

- (id)_bodyDataForItemIDs:(id)arg1 sessionID:(unsigned int)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 sessionID:(unsigned int)arg3 useLongIDs:(BOOL)arg4;

@end
