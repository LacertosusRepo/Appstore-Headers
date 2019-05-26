//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@interface SPTEpisodeUnplayedRequestData : NSObject <SPTPodcastRequestData>
{
    NSString *_requestStringTemplate;
    NSString *_requestAction;
    NSData *_requestBody;
}

@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSString *requestAction; // @synthesize requestAction=_requestAction;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (id)initWithURLs:(id)arg1 markAsUnplayed:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
