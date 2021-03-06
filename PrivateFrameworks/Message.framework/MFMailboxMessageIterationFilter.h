/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSIndexSet, NSString;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {
    NSIndexSet *_mailboxes;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (BOOL)filterMessageWithStatement:(struct sqlite3_stmt { }*)arg1;
- (id)initWithMailboxes:(id)arg1;

@end
