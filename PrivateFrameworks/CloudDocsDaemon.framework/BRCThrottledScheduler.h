/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCMinHeap, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCThrottledScheduler : NSObject {
    id _cb;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
    BRCMinHeap *_minHeap;
    NSString *_name;
    NSObject<OS_dispatch_source> *_schedulerDelay;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_source> *_schedulerSource;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property(readonly) id cb;
@property(readonly) NSObject<OS_dispatch_group> * hasWorkGroup;
@property(readonly) BRCMinHeap * minHeap;
@property(readonly) NSString * name;
@property(readonly) NSObject<OS_dispatch_source> * schedulerDelay;
@property(readonly) NSObject<OS_dispatch_queue> * schedulerQueue;
@property(readonly) NSObject<OS_dispatch_source> * schedulerSource;
@property(readonly) NSObject<OS_dispatch_queue> * targetQueue;

- (void).cxx_destruct;
- (void)_schedule;
- (void)_scheduleIfNecessaryWhenThrottleChanged:(id)arg1;
- (void)_throttleChangedHeapKey:(id)arg1;
- (void)addThrottle:(id)arg1;
- (id)cb;
- (void)closeSync;
- (id)hasWorkGroup;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2 workCallback:(id)arg3;
- (id)minHeap;
- (id)name;
- (void)removeThrottle:(id)arg1;
- (void)resume;
- (id)schedulerDelay;
- (id)schedulerQueue;
- (id)schedulerSource;
- (void)suspend;
- (id)targetQueue;
- (void)unscheduleThrottle:(id)arg1;

@end
