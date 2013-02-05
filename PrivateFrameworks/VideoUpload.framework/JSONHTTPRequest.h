/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSURLConnection, NSDictionary, <JSONHTTPRequestDelegate>, NSData;

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate> {
    int _HTTPMethod;
    NSURLConnection *_connection;
    <JSONHTTPRequestDelegate> *_delegate;
    NSDictionary *_getParams;
    NSData *_overridePostBody;
    NSDictionary *_postParams;
    NSMutableData *_rawData;
    BOOL _receivedValidResponse;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_response;
}

@property int HTTPMethod;
@property(retain) NSDictionary * getParams;
@property(retain) NSDictionary * postParams;
@property(readonly) NSHTTPURLResponse * response;

- (int)HTTPMethod;
- (id)_multipartParamData:(id)arg1;
- (id)_paramString:(id)arg1;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)getParams;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)postParams;
- (id)response;
- (void)setGetParams:(id)arg1;
- (void)setHTTPHeader:(id)arg1 value:(id)arg2;
- (void)setHTTPMethod:(int)arg1;
- (void)setOverridePostBody:(id)arg1;
- (void)setPostParams:(id)arg1;
- (void)start;

@end