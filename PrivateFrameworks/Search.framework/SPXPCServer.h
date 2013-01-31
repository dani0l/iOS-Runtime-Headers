/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableDictionary;

@interface SPXPCServer : NSObject  {
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_connectionsQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shutdownHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _defaultMessageHandler;

    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    BOOL _timerHasFiredSinceLastMessage;
    BOOL _timeoutPending;
}

@property(copy) id defaultMessageHandler;
@property(copy) id disconnectHandler;
@property(copy) id shutdownHandler;


- (void)dealloc;
- (BOOL)connectionsAreActive;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)startListening;
- (void)setShutdownHandler:(id)arg1;
- (id)shutdownHandler;
- (id)defaultMessageHandler;
- (void)setHandlerForMessageName:(id)arg1 handler:(id)arg2;
- (id)initListenerWithServiceName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)setDefaultMessageHandler:(id)arg1;
- (void)_handleNewConnection:(id)arg1;
- (id)_handlerForMessageName:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (id)disconnectHandler;
- (void)setIdleTimerInterval:(double)arg1;
- (BOOL)_runShutdownHandler;
- (void)_rescheduleIdleTimerSourceWithInterval:(double)arg1;
- (BOOL)_doingWork;
- (void)_resetMessageFlag;

@end