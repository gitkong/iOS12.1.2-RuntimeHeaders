/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRequestBroker : NSObject {
    NSMutableDictionary * _activeRequests;
    NSXPCConnection * _connection;
}

@property (readonly) NSMutableDictionary *activeRequests;
@property (retain) NSXPCConnection *connection;

+ (id)interface;

- (void).cxx_destruct;
- (void)_startConnection;
- (id)activeRequests;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)arg1;
- (id)connection;
- (id)description;
- (id)init;
- (void)markRequestAsActive:(id)arg1;
- (void)markRequestAsComplete:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)submitRequest:(id)arg1 withReplyHandler:(id /* block */)arg2;

@end
