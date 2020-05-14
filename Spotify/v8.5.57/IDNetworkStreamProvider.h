//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDNetServiceBrowserDelegate-Protocol.h"
#import "IDStreamProvider-Protocol.h"

@class IDNetServiceBrowser, NSInputStream, NSOutputStream, NSString;
@protocol IDStreamProviderDelegate;

@interface IDNetworkStreamProvider : NSObject <IDNetServiceBrowserDelegate, IDStreamProvider>
{
    id <IDStreamProviderDelegate> _delegate;
    IDNetServiceBrowser *_netServiceBrowser;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) IDNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property __weak id <IDStreamProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 resolutionDidFailWithError:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didSelectService:(id)arg2;
- (void)reset;
- (void)stop;
- (void)start;
- (id)initWithNetServiceBrowser:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

