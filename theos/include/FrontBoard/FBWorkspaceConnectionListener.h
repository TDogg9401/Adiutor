//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCConnectionListenerHandler.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler>
{
    NSObject<OS_dispatch_queue> *_connectionDispatcherQueue;
}

+ (id)sharedInstance;
- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

