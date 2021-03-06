//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntityResolver-Protocol.h"

@class NSString;
@protocol SPTConcertsEntityResolverDelegate;

@interface SPTConcertsLocalEntityResolver : NSObject <SPTConcertsEntityResolver>
{
    id <SPTConcertsEntityResolverDelegate> _delegate;
}

+ (id)albumWithURI:(id)arg1 albumName:(id)arg2 artistName:(id)arg3 albumImageURI:(id)arg4;
+ (id)artistWithName:(id)arg1 URI:(id)arg2 imageURL:(id)arg3 hasAffinity:(_Bool)arg4;
+ (id)createMockEntity;
@property(nonatomic) __weak id <SPTConcertsEntityResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)resolveConcertEntityForURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

