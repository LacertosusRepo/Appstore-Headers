//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GCKNetServiceBrowserDelegate;

@interface GCKNetServiceBrowser : NSObject
{
    id <GCKNetServiceBrowserDelegate> _delegate;
}

+ (id)netServiceBrowserForServiceType:(id)arg1 discoveryProtocol:(long long)arg2;
@property(nonatomic) __weak id <GCKNetServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopSearch;
- (_Bool)startSearchWithSubtypes:(id)arg1;
- (_Bool)startSearch;

@end

